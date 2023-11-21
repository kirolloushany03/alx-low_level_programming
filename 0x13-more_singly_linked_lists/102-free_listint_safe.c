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
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
