#include "main.h"
/**
*_islower - Check if a character is lowercase
*@c: The character to be checked
*Description: Checks if the character `c` is a lowercase letter.
*Returns 1 if it is lowercase, 0 otherwise.
*
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
