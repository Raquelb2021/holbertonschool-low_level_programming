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

#include <stdio.h>
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

