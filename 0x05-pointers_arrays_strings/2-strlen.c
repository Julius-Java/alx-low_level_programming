#include "main.h"
/**
 *_strlen - counts the number of characters in a string
 *@s: array of string to be counted
 *Return: void
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
