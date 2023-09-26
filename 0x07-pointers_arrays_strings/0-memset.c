#include "main.h"

/**
  * _memset - fill memory with a constant byte
  * @s: string pointer
  * @b: constant byte
  * @n: number of bytes
  * Return : return pointer s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unisgned int i;

	for (i = 0; i < n; n++)
	{
		s[i] = b;
	}
	return (s);
}
