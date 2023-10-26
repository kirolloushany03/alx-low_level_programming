#include <stdio.h>
#include <string.h>
#include "main8.h"


/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: (1) if the string is a palindrome, (0) otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);

	if (s[0] != s[len - 1])
		return (0);

	s[len - 1] = '\0';

	return (is_palindrome(s + 1));
}

int main(void)
{
	char *str1 = "level";
	char *str2 = "hello";

	printf("%s is a palindrome: %d\n", str1, is_palindrome(str1));
	printf("%s is a palindrome: %d\n", str2, is_palindrome(str2));

	return (0);
}
