#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: the name of the list to print through
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		count++;
	}
	return (count);
}
