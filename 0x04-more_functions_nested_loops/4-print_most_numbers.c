#include "main.h"

/**
 * print_most_numbers - prints numbers from '0' to '9' excluding '2' and '4'
 *
 * @num - character to be printed
 *
 * loops through '0' - '9' and print the characters
 * excluding '2' and '4' followed by a new line
 */
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
