#include "main.h"
/**
 * _strspn - get the length of a prexfix substring.
 * @s: string to be scanned.
 * @accept: string of characters to match.
 *
 * Return: number of btye from s in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, c = 0, off = 0, g = 0;

	for (j = 0; s[j]; j++)
	{
		for (c = 0; accept[c]; c++)
		{
			off = 0;
			if (s[j] == accept[c])
			{
				g++;
				off = 1;
				break;
			}
		}
		if (off == 0)
		{
			break;
		}
	}
	return (g);
}
