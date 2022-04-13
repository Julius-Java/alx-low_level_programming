#include "main.h"

/**
 * print_alphabet_x10 - prints all the alphabets in lower case x10 followed by
 * a new line
 *
 * loops ten times and call the function print_alphabeti_x10 each time
 *
 * Return - runs the print alphabet function ten times
 */

void print_alphabet_x10(void)
{
	int i;
	char alph;

	for (i = 0; i < 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
