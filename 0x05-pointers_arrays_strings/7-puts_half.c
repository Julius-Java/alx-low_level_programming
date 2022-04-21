#include "main.h"
/**
 *puts_half - prints the second half of a string followed by a new line
 *@str: String to be printed
 *Return: void
 */
void puts_half(char *str)
{
	int length, half;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else if (length % 2 != 0)
	{
		half = (length + 1) / 2;
	}
	while (half < length)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
