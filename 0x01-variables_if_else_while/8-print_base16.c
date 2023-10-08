#include <stdio.h>
/**
*main - Entra point
*
*description: this program we will print the hexadecimal
*base16
*
*Return: Always 0 (success)
*/
int main(void)
{
char hexa;
for (hexa = '0'; hexa <= '9' ; hexa++)
{
putchar(hexa);
}
for (hexa = 'a'; hexa <= 'f'; hexa++)
{
putchar(hexa);
}
 putchar('\n');

return (0);
}
