#include "main.h"
/**
 *main - Prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0 Success
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			_putchar(letter);
			letter++;
		}
		letter = 'a';
	}
	_putchar('\n');
	}
}




