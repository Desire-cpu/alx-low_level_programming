#include "lists.h"

/**
 * print list int
 *
 *@h pointer to first node
 *
 * return tye number of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t node_number = 1;

	/* zero when h is null*/
	/* if statement that test condition for h*/

	if (h == NULL)
		return (0);


	while (h->next != NULL)

	{

		printf("%d\n", h->n);
		/* is a pointer*/


		h = h->next;
		/* counting*/
		node_number++;
	}
	/*show last nod*/

	printf("d\n", h->);

	return (node_number);

}
