#include "mainc.h"
#include <stdlib.h>

/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: A pointer to the memory previously allocated
* @old_size: The size, in bytes, of the allocated space for ptr
* @new_size: The new size, in bytes of the new memory block

* Return: A pointer to the newly allocated memory. If new_size > old_size, the
* "added" memory is not initialized. If new_size == old_size, returns ptr.
* If ptr is NULL, equivalent to malloc(new_size).
* If new_size is 0 and ptr is not
* NULL, equivalent to free(ptr) and returns NULL.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
