#include "lists.h"

/**
 * add_node_end - add a new node at the end
 * @head: pointer to pointer to the head
 * @str: pointer to the string
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_str = strdup(str);

	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = new_str;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	}

	return (new_node);
}
