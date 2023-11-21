#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 * @head: Double pointer to the head of the list
 *
 * Description: This function frees the linked list
 * by traversing it once and freeing each node.
 * It returns the size of the list that was freed.
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *current_node;
	size_t node_count = 0;

	if (head == NULL || *head == NULL)
		return (0);

	current_node = *head;
	while (current_node != NULL)
	{
		listint_t *next_node = current_node->next;

		free(current_node);
		current_node = next_node;
		node_count++;
	}

	*head = NULL;

	return (node_count);
}
