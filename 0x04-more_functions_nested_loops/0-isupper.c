#include "main.h"

/**
 * _isupper - checks if a character is lowercase
 * @c: character to be checked
 * * * * * * * * * * * * * * * *
 * loops through upper case letters and returns
 * a value
 *
 * Return: 1 if the character is uppercase. 0 otherwise
*/
int _isupper(int c)
{
	char upper;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			return (1);
		}
	}

	return (0);
}
