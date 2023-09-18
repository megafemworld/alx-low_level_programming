#include "main.h"

/**
  * _strlen - Count the length of a string
  *
  * @s: string to be counted
  * Return: 0 Always.
  */

int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
