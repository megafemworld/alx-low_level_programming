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

	for (i = 0; s1[i] != '\0'; i++)
	{
		if ( s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		else
		{
			continue;
		}
	}
	return 0;
}
