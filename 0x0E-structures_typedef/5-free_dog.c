#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees the memory allocated for a dog_t object.
 * @d:		Pointer to the dog_t object to be freed.
 *
 * Description:
 *This function frees the memory allocated for a dog_t object,
 *including the memory allocated for the name and owner strings.
 *If the pointer is NULL, no action is taken.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
