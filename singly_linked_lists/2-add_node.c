#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list.
* @head: A double pointer to the head of the list_t list.
* @str: The string to be duplicated and added to the list.
*
* Return: The address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int lenght = 0;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	/* Duplicate the string */
	new_node->str = strdup(str);
	if ((new_node->str) == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Calculate the length of the string */
	while (str[lenght])
		lenght++;

	/* Initialize the new node's data */
	new_node->len = lenght;
	new_node->next = *head;

	/* Point the head to the new node */
	*head = new_node;

	return (new_node);
}
