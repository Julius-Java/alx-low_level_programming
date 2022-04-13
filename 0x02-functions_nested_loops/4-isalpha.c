#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: character to be checked
 * Return: 1 if character is an alphabet. 0 otherwise
*/

int _isalpha(int c)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower && c == upper)
			{
				return (1);
			}
		}
	}

	return (0);
}
