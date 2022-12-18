#include "lists.h"

/**
* get_nodeint_at_index - locates desired node of listint_t list
* @head: A pointer to the head of the list
* @index: Index of the node to locate - start at 0.
*
* Return: if the node does not exist -NULL / locate a node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
