#include <stddef.h>
#include "main.h"

/**
  * _strchr - locate a character in a string
  * @s: string to search through
  * @c: character to search for
  * 
  * Return: pointer or Null
  */
char *_strchr(char *s, char c)
{
	char *p = NULL;
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = (s + i);
			break;
		}
		i++
	}
	if (s[i] == '\0' && c == '\0')
	{
		p = (s + i);
	}
	return (p);
}
