#include "main.h"

/**
 * more_numbers - prints numbers from 0 - 14 on ten different lines
 * @line - loop for the number of lines that num prints on
 * @num - numbers to be printed
 *
 * loops through 0 - 10 and prints 0 - 14
 * for each iteration of the first for loop followed by a new line
 */
void more_numbers(void)
{
	int line;
	int num;

	for (line = 0; line < 10; line++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num <= 9)
			{
				_putchar(num + '0');
			}
			if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
