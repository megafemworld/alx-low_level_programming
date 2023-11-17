#include "main.h"
/**
  * _strlen_recursion - Calculate the length of a string
  * @s: string to calculate the length of the string
  *
  * Return: length of the string
  */
int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
	{
		return (0);
	}
	i = i + 1;
	_strlen_recursion(s + 1);
	return (i);
}
