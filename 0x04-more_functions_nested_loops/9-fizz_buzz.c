#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Description: prints the number 1 - 100
* Fizz for multiples of 3, Buzz for5 and FizzBuzz for both
*
* Return: Always 0
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15  == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%i", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);

}
