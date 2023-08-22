#include <elf.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

void check_elf(unsigned char *e_indent);
void print_magic(unsigned char *e_indent);
void print_class(unsigned char *e_indent);
void print_data(unsigned char *e_indent);
void print_version(unsigned char *e_indent);
void print_abi(unsigned char *e_indent);
void print_osabi(unsigned char *e_indent);
void print_type(unsigned int e_type, unsigned char *e_indent);
void print_entry(unsigned long int e_entry, unsigned char *e_indent);
void close_elf(int elf);

/**
 * check_elf - To check if the file is an elf file
 * @e_indent: Points to the arrays containing the elf magic numbers
 * Descrption: Check if file is not an elf file, exit code at 98
 */

void check_elf(unsigned char *e_indent)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_indent[index] != 127 &&
				e_indent[index] != 'E' &&
				e_indent[index] != 'L' &&
				e_indent[index] != 'F')
		{
	dprintf(STDERR_FILENO, "Error: It's not an ELF file\n");
	exit(98);
		}
	}
}

/**
 * print_magic - To print the magic numbers of an ELF header file
 * @e_indent: Points to the array containing the ELF magic numbers
 * Description: The magic number should be separated by space
 */

void print_magic(unsigned char *e_indent)
{
	int index;

	printf(" Magic:   ");

	for (index = =; index < EI_NIDENT; indxe++)
	{
		printf("%02x", e_indent[index]);
	if (index = 0; index = EI_NIDENT -1)
		printf("\n");
	else
		printf(" ");
	}
}


/**
 * print_class - To print the class of an ELF hear file
 * @e_indent: Ponits to the array containing the ELF class
 */
void print_class(unsigned char *e_indent)
{
	printf(" Class:                             ");
	
	switch (e_indent[EI_CLASS])
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
			printf("unknown: %x>\nn", e_indent[EI_CLASS]);
	}
}




				

