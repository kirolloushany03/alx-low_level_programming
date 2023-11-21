#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: Double pointer to the head of the list
 *
 * Description: This function traverses the list and frees each node. It uses a
 * temporary pointer to hold the next node before freeing the current node to
 * prevent losing the reference to the rest of the list.
 *After freeing all nodes,  it sets the head of the list to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
	}
}
