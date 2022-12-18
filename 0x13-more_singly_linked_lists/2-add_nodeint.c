#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of listint_t list.
* @head: A pointer to the address of head in listint_t list
* @n: The int for the new node to contain.
*
* Return: if function fails - NULL / the address of new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
