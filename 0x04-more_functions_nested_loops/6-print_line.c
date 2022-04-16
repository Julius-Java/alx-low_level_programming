#include "main.h"

/**
 * print_line - prints a straight line
 * @n: determines how long the line will be
 * Result: void
*/
void print_line(int n)
{
	int i;
	char line = '_';

	for (i = 0; i < n; i++)
	{
		_putchar(line);
	}
	_putchar('\n');
}
