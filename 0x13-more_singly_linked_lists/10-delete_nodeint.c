#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given
 * index in a listint_t linked list
 * @head: Double pointer to the head of the list
 * @index: The index of the node that should be deleted.
 *
 * Description: This function deletes the node at the position
 * `index` in the list.
 * It returns 1 if the deletion is successful, or -1 if it fails
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node;
	listint_t *current_node;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;
	while (current_node != NULL && count < index)
	{
		prev_node = current_node;
		current_node = current_node->next;
		count++;
	}

	if (count != index)
	{
		return (-1);
	}

	if (current_node == *head)
	{
		*head = current_node->next;
	}
	else
	{
		prev_node->next = current_node->next;
	}

	free(current_node);

	return (1);
}
