#include <stdlib.h>
#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list
* @head: pointer to head of linked list
* Return: int - sum of all data
*/
int sum_listint(listint_t *head)
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}
	return (amount);
}
