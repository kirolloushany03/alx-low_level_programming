#include "main.h"
/**
*description: checks whether a given character
*is an upper case letter
*returns :
*if c is uppercase so it will return 1
*if c is not uppercase will return 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
