#include "main.h"

/**
 * *_strcpy - copy string pointed by src
 * @dest: char type string
 * @src: char type string
 * Description: copy string pointed by pointer src to buffer pointed by dest
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
			return (dest);
}
