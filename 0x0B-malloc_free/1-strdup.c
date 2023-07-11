#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
*  _strdup - write a funtion that returns a pointer and duplicates a parameter
* @str: the string to be copied
* Return: if str == NULL or insufficient memory is available - NULL
* otherwise - a pointe to duplicate string
*/

char *_strdup(char *str)
{

char *duplicate;
int i, len = 0;

if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
len++;
duplicate = malloc(sizeof(char) * (len + 1));

if (duplicate == NULL)
return (NULL);

for (i = 0; str[i]; i++)
duplicate[i] = str[i];
duplicate [len] = '\0';
return (duplicate);
}
