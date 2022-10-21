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
 * struct dog_t - new name of the struct
 * @name: first member
 * @age: second member
 * @owner: third member
 */
	typedef struct dog_t
	{
		char *name;
		float age;
		char *owner;
	} dog_t;

#include <stdio.h>
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

