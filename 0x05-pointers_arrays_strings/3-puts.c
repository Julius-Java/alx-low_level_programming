#include "main.h"
/**
 *_puts - prints string followed by a new line
 *@str: string to be printed
 *Return: void
 */
void _puts(char *str)
{
	int n;

	n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
