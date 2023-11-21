#include "lists.h"

/**
 * get_nodeint_at_index - Fetches the nth node of a listint_t linked list
 * @head: Pointer to the head of the list
 * @index: The index of the node, starting at 0
 *
 * Description: This function iterates over the linked list
 * It returns a pointer to the nth node if it exists
 *
 * Return: The address of the nth node, or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_iterator;
	unsigned int node_counter = 0;

	node_iterator = head;
	while (node_iterator != NULL)
	{
		if (node_counter == index)
		{
			return (node_iterator);
		}
		node_counter++;
		node_iterator = node_iterator->next;
	}

	return (NULL);
}
