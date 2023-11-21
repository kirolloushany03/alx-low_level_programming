#include "lists.h"


/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * in a listint_t linked list
 * @head: Double pointer to the head of the list
 * @idx: The index of the list where the new node should be added.
 * Index starts at 0
 * @n: The data of the new node
 *
 * Description: This function creates a new node with data `n`,
 * and inserts it at the position `idx` in the list.
 * It returns a pointer to the new node if the insertion is successful,
 * or NULL if it fails (i.e., if `idx` is out of range).
 *
 * Return: The address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *prev_node;
	listint_t *current_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	prev_node = *head;
	current_node = *head;
	while (current_node != NULL && count < idx)
	{
		prev_node = current_node;
		current_node = current_node->next;
		count++;
	}

	if (count != idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = prev_node->next;
	prev_node->next = new_node;

	return (new_node);
}
