#include "main7.h"
/**
 * _strspn - Get the length of a prefix substring.
 * @s: A pointer to the string to be searched.
 * @accept: A pointer to the string containing characters to search for.
 * Return:
 * The number of characters in the initial segment of 's' that consist only of
 * characters from 'accept'.
 */



unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;

for (; *s; s++)
{
int r;
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
{
return (n);
}
}
}
return (n);
}
