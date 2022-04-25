#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: integer to be printed)
 * Return: void
*/
void print_number(int n)
{
	int a, b, c;

	if (n < 0)
	{
		_putchar('-');
		a = n * -1;
	}
	else
	{
		a = n;
	}
	b = a;
	c = 1;

	while (b > 9)
	{
		b = b / 10;
		c = c * 10;
	}
	for (; c >= 1; c /= 10)
	{
		_putchar(((a / c) % 10) + 48);
	}
}
