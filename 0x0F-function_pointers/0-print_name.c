#include "fp.h"
#include <stdlib.h>
/**
 *print_name - is a function that print char (a name)
 *@name: is name that will given to the function
 *@f: is the function name
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)

f(name);
}
