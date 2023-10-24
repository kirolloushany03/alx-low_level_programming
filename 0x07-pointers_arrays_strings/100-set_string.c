#include "main7.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to the pointer to a char
 * @to: the pointer to a char to set the value to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
