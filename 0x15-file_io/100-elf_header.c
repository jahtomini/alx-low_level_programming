#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - Print error message.
 * @message: The message string.
 *
 * Return: Nothing.
*/
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * print_elf_header - Print the ELF header.
 * @header: The header struct.
 *
 * Return: Nothing.
*/
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", header->e_ident[i]);

	printf("\nClass: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ?
	"ELF32" : "ELF64");
	printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ?
	"2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: 0x%x\n", header->e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry.
 *
 * @argc: Number of args.
 * @argv: Array of args.
 *
 * Return: 0 if successful, 1 if not.
 */
int main(int argc, char *argv[])
{
	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	if (fd == -1)
		print_error("Failed to open the file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Failed to read the ELF header");

	/* Check if the file is an ELF file */
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	header.e_ident[EI_MAG1] != ELFMAG1 ||
	header.e_ident[EI_MAG2] != ELFMAG2 ||
	header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
	}

	/* Print the ELF header information */
	print_elf_header(&header);

	close(fd);
	return (0);
}
