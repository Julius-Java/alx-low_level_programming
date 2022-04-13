#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 * Return: 1 and '+' if number is greater than 0,
 * -1 and '-' if the number is less than 0,
 *  0 and 0 if the number is 0.
*/

int print_sign(int n)
{
	char plus = '+';
	char zero = '0';
	char minus = '-';

	if (n > 0)
	{
		_putchar(plus);
		return (1);
	}
	if (n == 0)
	{
		_putchar(zero);
		return (0);
	}
	if (n < 0)
	{
		_putchar(minus);
		return (-1);
	}

	return (0);
}
