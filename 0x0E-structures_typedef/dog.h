#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A new name of data type
 * @name: Dog name
 * @age: the age of the dog.
 * @owner: The owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
	};

/**
 * dog_t - Typedef for struct dog
 *
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
