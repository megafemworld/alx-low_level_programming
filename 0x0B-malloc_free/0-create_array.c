#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * create_array - create an array of char
  * @size: size of the array.
  * @c: character to use
  *
  * Return: NULL if size is 0 otherwise pointer to array.
  */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(*t) * size);
	if (t == NULL)
		return (NULL);
	for (unsigned int i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
