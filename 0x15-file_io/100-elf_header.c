#include "main.h"
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
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; ++i)
		printf("%02x ", header->e_ident[i]);

	printf("\n");

	print_class(header->e_ident);
	print_data(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	/* free(header); */
}

/**
 * print_class - Prints the class of an ELF header.
 *
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of an ELF header.
 *
 * @e_ident: A pointer to an array containing the ELF class.
 *
 * Return: Nothing.
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
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
		print_error("Not an ELF file");

	/* Print the ELF header information */
	print_elf_header(&header);

	close(fd);
	return (0);
}
