#include <stdio.h>
/**
*main - Entry point
*Description: this will print the alphabet in lower
*and upper cases followed by a new line
*
*Return: Always 0 (success)
*/
int main(void)
{
char lc, uc;
/*we have to declare the variables*/
/*no space before commas and also you*/
/*have to use && to combine the conditions*/
for (lc = 'a', uc = 'A'; lc <= 'z' && uc <= 'Z'; lc++, uc++)
{
/*here we dont have to put %c as putchar is for char*/
putchar(lc);
}
/*so here we have to swipe and make the variable lc is the uppercasse*/
/*so we can print it after the lower */
for (lc = 'A', uc = 'a'; lc <= 'Z' && uc <= 'z'; lc++, uc++)
{
putchar(lc);
}
/*to add a new line after the whole things with the chars*/
putchar('\n');
return (0);
}
