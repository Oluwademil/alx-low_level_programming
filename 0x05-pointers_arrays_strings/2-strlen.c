#include "main.h"

/**
 * _strlen - check the length of a string
 * @s: string to be check
 * Return: the length of a string
 */

int _strlen(char *s)

{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);


}
