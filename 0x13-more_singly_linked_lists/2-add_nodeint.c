#include "lists.h"

/**
 * add_nodeint - funtion for new node as head
 *
 * @head: pointer
 *
 * @n: integer n to add in a new node
 *
 * Return: address of the new element or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newbie;

	new_node = malloc(sizeof(listint_t));
	if (newbie == NULL)
		return (NULL);

	/*link first node in head with the new_node*/
	if (*head == NULL)
		newbie->next = NULL;
	else
		newbie->next = *head;

	newbie->n = n;
	/*put new node at the beginning of the list*/
	*head = newbie;

	return (*head);
}
