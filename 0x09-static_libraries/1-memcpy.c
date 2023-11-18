#include "main.h"

/**
  * _memcpy - copy from a specific memory area
  * @dest: memory destination to copy to
  * @src: Memory destination to copy from
  * @n: number of byte to copy
  * Return: return dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
