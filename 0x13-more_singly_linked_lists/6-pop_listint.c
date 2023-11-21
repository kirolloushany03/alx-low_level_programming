#include "lists.h"


/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *and returns the head node’s data
 * @head: Double pointer to the head of the list
 *
 * Description: This function first checks if the list is empty
 * If the list is empty, it returns 0.
 * Otherwise, it stores the data of the head node in a temporary variable
 * updates the head of the list to point to the next node,
 * and then frees the memory of the old head node.
 * Finally, it returns the data of the old head node.
 *
 * Return: The data of the old head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp_node;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	temp_node = *head;
	*head = (*head)->next;
	free(temp_node);

	return (data);
}
