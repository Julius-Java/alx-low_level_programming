#include "main.h"

/**
 * print_numbers - print numbers from 0 - 9
 *
 * @num - characters to be checked
 *
 * loops through '0' - '9' and prints the characters followed by a new line
 */
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
