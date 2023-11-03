#include "mainc.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings up to n characters of s2.
* If n is greater or equal to the length of s2 then use the entire string s2.
* If NULL is passed, treat it as an empty string.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of characters to be appended from s2.
*
* Return: A pointer to the newly allocated space in memory, which contains s1,
* followed by the first n bytes of s2, and null terminated.
* If the function fails, it should return NULL.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len_s1 = 0, len_s2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	if (n >= len_s2)
		n = len_s2;

	concat_str = malloc(sizeof(char) * (len_s1 + n + 1));
	if (concat_str == NULL)
	return (NULL);

	for (i = 0; i < len_s1; i++)
		concat_str[i] = s1[i];
	for (i = 0; i < n; i++)
		concat_str[len_s1 + i] = s2[i];

	concat_str[len_s1 + n] = '\0';

	return (concat_str);
}
