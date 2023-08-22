#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

char *create_buffer(char *file);
void close_file(int fd);


/**
 *create_buffer - Print 1024 bytes for a buffer
 * @file: Location buffer will be storing chars
 * Return: The newly allocated buffer
 */


char *create_buffer(char *file)
{

	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Close the written file
 * @fd: File descriptor to be close
 */


void close_file(int fd)
{

	int i;

	i = close(fd);
	if (i == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - To copy the content of a file into another
 * @argc: This is the number of argument to be copied
 * @argv: Arrays that points to th argument
 * Return: 0 at success
 * Description: The program should exit at 97 if argument count is incorrect
 * if file_from doesn't exist or can't be read - exit at 98
 * if file_to can't be wrriten or created - exit at 99
 * if file_from/file_to can't be closed or exist - exit 100
 */


int main(int argc, char *argv[])
{


	int from, to, a, b;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	a = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
					"Error : Cannot read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		b = write(to, buffer, a);
		if (to == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		a = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (a > 0);
	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

