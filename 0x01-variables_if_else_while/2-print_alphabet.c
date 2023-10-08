#include <stdio.h>
/**
*main-Entry point
*
*Description : this will print the alphbet
*
*
*Return : Always with 0 (sucess)
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
return (0);
}
