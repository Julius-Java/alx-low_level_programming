#include "main.h"

/**
 * _islower - checks for lower case character
 *
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
