#include "main.h"
/**
  * _strcmp - compare two string
  * @s1: first string
  * @s2: second string
  * Return: 0 on equal
  */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 > s2)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
		s1++;
		s2++;
	}
	return (0);
}
