#include "main.h"
/**
 *print_rev - prints string backward followed by a new line
 *@s: string to be printed backward
 *Return: void
 */
void print_rev(char *s)
{
	int n, p;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	p = n - 1;
	while (p >= 0)
	{
		_putchar(s[p]);
		p--;
	}
	_putchar('\n');
}
