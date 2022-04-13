#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: character to be checked
 * * * * * * * * * * * * * * * *
 * loops through lower case letters and returns
 * a value
 *
 * Return: 1 if the character is lowercase. 0 otherwise
*/

int _islower(int c)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (c == alph)
		{
			return (1);
		}
	}

	return (0);
}
