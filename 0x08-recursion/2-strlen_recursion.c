#include "main.h"
/**
  * _strlen_recursion: calculate the length of a string
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
	else
	{
		_strlen_recursion(s + 1);
		i = i + 1;
	}
}
