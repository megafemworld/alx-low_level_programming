#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
  * _strdup - return a pointer to a duplicated string
  * @str: string pointer to duplicate
  *
  * Return: pointer on success otherwise NULL
  */

char *_strdup(char *str)
{
	char *t;
	int i, len;

	if (str == NULL)
		return (NULL);
	len = strlen(str) + 1;
	t = malloc(len * sizeof(char));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		t[i] = str[i];
	}
	return (t);
}
