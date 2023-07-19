#ifndef MAIN_H
#define MAIN_H

int _putchar(int i);
int _strlen(const char *s);
unsigned int binary_to_uint(const char *b);
unsigned int _pow(unsigned int base, unsigned int exp);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
