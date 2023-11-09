#include "function_pointer_main.h"

void print_name(char *name, void (*f)(char *))
{
f(name);
}
