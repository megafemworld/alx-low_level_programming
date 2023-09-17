#include"main.h"
/**
  * is_lower - check for lowercase
  * description: _islower check if it's small letter
Param: 
  * Return: 1 if lowercase and 0 if otherwise
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
			return (0);
		}
	}
	return (0);
}
