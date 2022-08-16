#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - deletes head note of a listint_t and returns its data
* @head: point to head node of linked list
* Return: int - data of head note
*/
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}
	return (n);
}
