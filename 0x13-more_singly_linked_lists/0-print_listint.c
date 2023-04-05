#include "lists.h"

/**
 * print_listint - a function that prints all elements of a list
 *
 * @h: pointer to first node
 *
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t node_number = 1;

	/* 0 of nodes when h is null*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		/*change next node*/
		h = h->next;
		/*count no of nodes*/
		node_number++;
	}

	/*show node*/
	printf("%d\n", h->n);

	return (node_number);
}
