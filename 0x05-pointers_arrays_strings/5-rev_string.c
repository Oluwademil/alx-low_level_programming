#include "main.h"

/**
* rev_string -  reverse a string
* @str: pointer pointing to a sting
* Return: 0
*/

void rev_string(char *s)

{

int length, z, half;
char temp;

for (length = 0; s[length] != '\n'; length++)
;
z = 0;
half = length / 2;

while (half--)
{
temp = s[length - z - 1];
s[length - z - 1] = s[z];
s[z] = temp;
z++;
}

}

