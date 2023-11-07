#ifndef DOG_H
#define DOG_H

/**
 * typedef dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;


/**
 * struct dog - Represents a dog with its name, age, and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: This structure represents a dog and contains
 * information about its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
