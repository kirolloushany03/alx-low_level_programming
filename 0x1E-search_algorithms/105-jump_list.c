#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted singly linked list
 * using the Jump search algorithm.
 * @list: Pointer to the head of the linked list.
 * @size: Number of nodes in the linked list.
 * @value: Value to search for.
 *
 * Return: Index where the value is found, or -1 if the value is not present.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current_node, *old_node;
	size_t jump = sqrt(size), i = 0;

	if (!list)
		return (NULL);
	current_node = list, old_node = list;
	while (current_node && current_node->next && current_node->index < size - 1)
	{
		old_node = current_node;
		i = 0;
		while (current_node->index < size - 1 && i++ < jump)
			current_node = current_node->next;
		printf("Value checked at index [%lu] = [%d]\n",
			   current_node->index, current_node->n);
		if (current_node->n >= value)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		   old_node->index, current_node->index);
	while (old_node->index <= current_node->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			   old_node->index, old_node->n);
		if (old_node->n == value)
			return (old_node);
		if (old_node->index == current_node->index)
			break;
		old_node = old_node->next;
	}
	return (NULL);
}
