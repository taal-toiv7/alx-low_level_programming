#include "lists.h"

/**
* sum_listint - calculates the sum of data of listint_t
* @head: pointer to the head of the listint_t
*
* Return: if the list is empty - 0 / the sum of data
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
