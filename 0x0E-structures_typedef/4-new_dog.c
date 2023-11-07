#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner of the dog.
 *
 * Return: Pointer to the newly created dog_t object.
 *         NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	size_t name_length, owner_length;

	if (name == NULL || owner == NULL)
		return (NULL);

	name_length = strlen(name);
	owner_length = strlen(owner);

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = (char *)malloc((name_length + 1) * sizeof(char));
	owner_copy = (char *)malloc((owner_length + 1) * sizeof(char));
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
