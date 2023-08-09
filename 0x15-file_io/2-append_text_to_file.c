#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * append_text_to_file - To  append text at the end of a file
 * @filename: Points to the file written
 * @text_content: The content to be written
 * Return: -1 if lacks permissive rights, NULL or 1 if it already exists
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int xy, z, wid = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (wid = 0; text_content[wid];)
			wid++;
	}

	xy = open(filename, O_WRONLY | O_APPEND);
	z = write(xy, text_content, wid);

	if (xy == -1 || z == -1)
		return (-1);

	close(xy);

	return (1);
}
