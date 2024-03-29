#include "lists.h"
/**
 *sum_dlistint - sum function
 *@head: head of list
 * Description:
 * This function traverses the given doubly-linked list
 * starting from the head,
 *Return: all element
 */
int sum_dlistint(dlistint_t *head)

{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
