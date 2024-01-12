#include "lists.h"
/**
 * free_dlistint - free memory
 * @head: haed of nodes
 * Description:
 * This function traverses the given doubly-linked list starting from the head,
 * frees each node, and sets the head to NULL.
 * Return: values
 */
void free_dlistint(dlistint_t *head)

{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}

	head = (NULL);
}
