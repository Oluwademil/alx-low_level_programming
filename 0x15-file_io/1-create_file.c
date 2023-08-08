#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * create_file - To create a file
 * @filename: Points to the file to be written
 * @text_content: The content to be written
 * Return: -1 if NULL, or empty
 */

int create_file(const char *filename, char *text_content)
{

	int fd, x, y = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (y = 0; text_content[y];)
			y++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	x = write(fd, text_content, y);

	if (fd == -1 || x == -1)
		return (-1);
	close(fd);
	return (1);
}

