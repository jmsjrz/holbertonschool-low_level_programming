#include "dog.h"

/**
* init_dog - initializes a variable of type struct dog
* @d: pointer to a struct dog to initialize
* @name: name of the dog to set
* @age: age of the dog to set
* @owner: owner of the dog to set
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL) /* check if the pointer d is not NULL */
	{
		d->name = name; /* initialize name to value "name" */
		d->age = age;
		d->owner = owner;
	}
}
