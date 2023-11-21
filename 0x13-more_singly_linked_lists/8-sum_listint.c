#include "lists.h"

/**
 * sum_listint - Calculates the sum of all data in a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Description: This function iterates over the linked list,
 *starting from the head, and adds up all the data in the nodes.
 * It returns the sum of all data if the list is not empty
 *
 * Return: The sum of all data in the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *node_iterator;
	int total_sum = 0;

	node_iterator = head;
	while (node_iterator != NULL)
	{
		total_sum += node_iterator->n;
		node_iterator = node_iterator->next;
	}

	return (total_sum);
}
