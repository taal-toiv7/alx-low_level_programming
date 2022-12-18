#include "lists.h"

/**
* insert_node_at_index - Inserts a node to a list in desired place
* @head: pointer to the address of head in the listint_t
* @idx: index of the list where new node will be added start at 0
* @n: the int for new node to contain
*
* Return: if functions fails - NULL / the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	new->next = copy->next;
	copy->next = new;

	return (new);
}
