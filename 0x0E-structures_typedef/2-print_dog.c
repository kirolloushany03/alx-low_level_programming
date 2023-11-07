#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints the contents of a struct dog variable.
 * @d: Pointer to the struct dog variable to be printed.
 *
 * Description: This function prints the values of the
 * members of a struct dog variable.
 * If an element of d is NULL, it prints (nil) instead of the element's value.
 * If d is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
