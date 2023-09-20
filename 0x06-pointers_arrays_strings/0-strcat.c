#include "main.h"
/**
 * _strncat - concatenate two string together
 * @dest: the string to concatenate to
 * @src: tge string to concatenate to the end.
 * Return: 0 Always.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
}
