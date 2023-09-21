#include "main.h"
/**
  * _strcmp - compare two string
  * @s1: first string
  * @s2: second string
  * Return: 0 on equal
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		else
		{
			return (-1);
		}
		i++
	}
	return (0);
}
