#include "main.h"
/**
 *main - prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}

}




