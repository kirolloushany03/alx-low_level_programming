#include "main6.h"
#include <stdio.h>


/**
 * rot13 - Applies the ROT13 transformation to a string.
 * @s: The string to be transformed.
 *
 *Return: A pointer to the modified input string ('s').
 */


char *rot13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
