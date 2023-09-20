#include "main.h"
/**
  * _strncat - concatenates two strings.
  * @dest: the string to be concatenates to
  * @src: the string to concatenates from
  * @n: n bytes from src.
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
