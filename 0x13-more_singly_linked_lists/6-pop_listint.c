#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * and return head node data
 * @head: pointer to head node
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
