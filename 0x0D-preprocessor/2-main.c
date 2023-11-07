#include "stdio.h"

/**
 *main - entry point of the program
 *
 *Description : this program will prints the name of the
 *source file by using a predefined macro called __FILE__
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
