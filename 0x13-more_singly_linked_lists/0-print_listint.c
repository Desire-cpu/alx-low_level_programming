#include "lists.h"

/**
 * print_listint - elements of a list.
 *
 * @h: poinyer to header.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{

	size_t nudo_size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nudo_size++;
	}
	return (nudo_size);

}
