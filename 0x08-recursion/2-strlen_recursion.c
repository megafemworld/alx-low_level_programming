#include "main.h"
/**
  * _strlen_recursion - Calculate the length of a string
  * @s: string to calculate the length of the string
  *
  * Return: length of the string
  */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	i = i + 1;
	_strlen_recursion(s + 1);
}
