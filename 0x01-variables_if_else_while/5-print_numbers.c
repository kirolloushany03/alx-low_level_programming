#include <stdio.h>
/**
*main - Entry point
*
* Description: This program will print the numbers from 0 to 9 on the same line
*without any spaces between them, followed by a newline character.
*
* Return: Always 0 (success)
*/
int main(void)
{
int n;

for (n = 0; n <= 9; n++)
{
printf("%d", n);
}

printf("\n");
return (0);
}

