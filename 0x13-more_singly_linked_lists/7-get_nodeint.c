#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns/retrieve
 * the nth node of a linked list
 * @head: pointer to head node
 * @index:  index of the node to be retrieved, starting at 0
 * Return: pointer to the node retrieved
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
