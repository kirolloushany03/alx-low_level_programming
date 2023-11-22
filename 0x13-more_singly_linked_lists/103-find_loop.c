#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Description: This function finds a loop in the linked list
 * by using Floyd's Cycle Detection Algorithm.
 * It returns the address of the node where the loop starts
 *
 * Return: The address of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr = head;
	listint_t *fast_ptr = head;

	while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			return (slow_ptr);
		}
	}

	return (NULL);
}
