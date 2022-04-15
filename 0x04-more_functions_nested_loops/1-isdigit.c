#include "main.h"

/**
 * _isdigit - checks if an input is a digit
 * @c: input to be checked
 * Return: 1 if input is a digit, 0 otherwise
*/
int _isdigit(int c)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		if (c == digit)
		{
			return (1);
		}
	}

	return (0);
}
