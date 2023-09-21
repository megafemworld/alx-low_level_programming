#include "main.h"
/**
  * _strcmp - compare two string
  * @s1: first string
  * @s2: second string
  * Return: 0 on equal
 */
int _strcmp(char *s1, char *s2)
{
	int i =0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
	 if (s1 != s2)
		{
		 return (*s1 - *s2);
		}
		i++;
	}
	return (0);
}
