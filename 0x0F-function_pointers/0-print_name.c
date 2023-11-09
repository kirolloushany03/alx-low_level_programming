#include "function_pointmain.h"
#include <stdlib.h> 
/**
 * print_name - Prints a name using a provided function.
 *
 * @name: The name to be printed.
 * @f: A function pointer that takes a char pointer as a parameter.
 *
 * Description:
 *		This function takes a name and a function pointer as parameters. If the name
 *		and function pointer are not NULL, it calls the provided function with the
 *		name as an argument.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
