#include"main.h"
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	int lowercase = 97;
	int letter = c;

	for (lowercase = 97; lowercase <= 122; lowercase++)
	{
		if (lowercase == letter)
		{
			return (1);
		}
		else
		{
			continue;
		}
	}
	return (0);
}
