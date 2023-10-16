#include <stdio.h>
#include "main5.h"
/**
 * rev_string - Reverse a string in place.
 *
 * @s: The string to be reversed.
 *
 * Description:
 * This function takes a pointer to a string and reverses the characters within
 * the string in place. If the string is NULL, no action is taken.
 */


void rev_string(char *s)
{
if (s != NULL)
{
int length = 0;
char *start = s;
char *end = s;
while (*end != '\0')
{
length++;
end++;
}
end--;
while (start < end)
{
char temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
}

