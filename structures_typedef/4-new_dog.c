#include "dog.h"

/**
* new_dog - creates a new instance of a dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*
* Description: Allocates memory to create a new dog structure, and initializes
* its fields with the provided values. If malloc fails for either
* the structure or its name and owner fields, the function will clean up any
* allocated memory and return NULL.
*
* Return: pointer to the newly created dog struct, or NULL if malloc fails.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_length = 0, owner_length = 0, i;

	/* Calculate the length of name and owner */
	while (name[name_length] != '\0')
		name_length++;
	while (owner[owner_length] != '\0')
		owner_length++;

	/* Allocate memory for the new dog struct */
	new_dog = malloc(sizeof(*new_dog));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name and owner fields */
	new_dog->name = malloc(name_length + 1);
	new_dog->owner = malloc(owner_length + 1);

	/* Check if memory allocation for name and owner was successful */
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name); /* Safe to call free on NULL */
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	/* Copy the name */
	for (i = 0; i <= name_length; i++)
		new_dog->name[i] = name[i];

	/* Copy the owner */
	for (i = 0; i <= owner_length; i++)
		new_dog->owner[i] = owner[i];

	/* Set the age */
	new_dog->age = age;

	return (new_dog);
}
