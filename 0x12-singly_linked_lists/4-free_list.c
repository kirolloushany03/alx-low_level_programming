#include "lists.h"
/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the list
 *
 * Return: Nothing
 *
 * Description: This function frees a list_t list by iterating over the list
 * and freeing each node. It uses a temporary pointer to hold the current
 * node while it advances the head pointer to the next node. This allows it to
 * free the current node without losing the reference to the next node.
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *tmp;

	current = head;

	while (current != NULL)
	{
		tmp = current;
		free(tmp->str);
		free(tmp);
		current = current->next;
	}
}
