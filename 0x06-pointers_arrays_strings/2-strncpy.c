#include "main.h"
/**
 * _strncpy - copy string in nth time
 * @dest: destination of the character
 * @src: string source to be copied
 * @n: number of characters to copy
 * Return: dest on sucess
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	while (src[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < n; i++)
	{
		if (i > j)
		{
			dest[i] = '\0';
		}
		else
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
