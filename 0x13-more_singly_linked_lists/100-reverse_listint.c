#include <stdlib.h>
#include "lists.h"

/**
* reverse_listint - reversed listint_t linked list
* @head: pointer to head of linked list
* Return: a pointer to the first node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}
		*head = prev;
		return (*head);
	}
	return (NULL);
}
