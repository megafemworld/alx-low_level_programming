#include "lists.h"
/**
 * print_dlistint - prints all elements of a list
 * @h: the name of the list to print through
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	int count = 0;

	for (dlistint_t  dlistint_t *h = head; i != NULL; i = i->next)
	{
		printf("%d\n", i->data);
		count++;
	}
	return (count);
}
