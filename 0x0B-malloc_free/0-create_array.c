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

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(*t) * size);
	if (t == NULL)
		return (NULL);
	t[0] = c;
	return (t);
}
