#include "lists.h"

/**
 * listint_len - a function that returns the number of elements.
 *
 * @h: pointer to the first node
 *
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t number_elements = 1;

	/*return 0 as nunmber of elements when h is NULL*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*count number of elements*/
		if (h->n != '\0')
			number_elements++;

		/*access next node*/
		h = h->next;
	}

	return (number_elements);
}
