#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * _strdup - return a pointer to a duplicated string
  * @str: string pointer to duplicate
  *
  * Return: pointer on success otherwise NULL
  */

char *_strdup(char *str)
{
	char *t;
	int i;

	if (str == NULL)
		return (NULL);
	t = malloc(sizeof(*str));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < sizeof(*str); i++)
	{
		t[i] = str[i];
	}
	free(t);
	return (t);
}
