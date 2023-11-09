#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name using a provided function.
 *
 * @name: The name to be printed.
 * @f: A function pointer that takes a char pointer as a parameter.
 *
 * Description:
 * This function takes a name and a function pointer as parameters.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
