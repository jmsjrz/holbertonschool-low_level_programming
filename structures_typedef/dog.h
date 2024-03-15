#ifndef _DOG_H_
#define _DOG_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - structure defining information for dogs
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: A struct to store the basic information about a dog, including
 * its name, age, and the name of its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
