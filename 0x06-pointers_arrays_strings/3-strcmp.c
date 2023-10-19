#include "main6.h"
/**
 * _strcmp - Compare two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is
 * found to be less than, equal to, or greater than s2.
 */

int _strcmp(const char *s1, const char *s2)
{
while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}

return (*s1 - *s2);
}
