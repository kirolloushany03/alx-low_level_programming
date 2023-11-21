#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head of the list
 *
 * Description: This function traverses the list and frees each node. It uses a
 * temporary pointer to hold the next node before freeing the current node
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
