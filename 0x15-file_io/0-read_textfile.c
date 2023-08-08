#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * read_textfile - read text file and print it to POSIX standard output
 * @filename: Points to the text being read
 * @letters: The number of letters to be read d printed
 * Return: The number or letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buffer;
	ssize_t y;
	ssize_t x;
	ssize_t w;

	y = open(filename, O_RDONLY);
	if (y == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	w = read(y, buffer, letters);
	x = write(STDOUT_FILENO, buffer, w);
	free(buffer);
	close(y);
	return (x);
}
