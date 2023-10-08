#include <stdio.h>
/**
*main-Entry point
*
*Description : this will print the alphbet
*and then a line bleow
*
*Return: Always with 0 (sucess)
*/
int main(void)
{
char l;
/*we have to declare the variables*/
for (l = 'a'; l <= 'z' ; l++)
{
/*here we dont have to put %c as putchar is for char*/
putchar(l);
}
/*to add a new line after the whole things with the chars*/
putchar('\n')
return (0);
}
