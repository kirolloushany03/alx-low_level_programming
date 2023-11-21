#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Description: This function prints the linked list
 * It returns the number of nodes in the list.
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node = head;
	size_t node_count = 0;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		node_count++;
	}

	return (node_count);
}
