#include "main.h"

/**
 *  print_alphabet - prints the alphabet in lowercase
 *  *   *   *   *   *   *
 *  loops through all the letters of the alphabet in lowercase
 *  and prints each one
 *
 *  Return: all the letters in the alphabet followed by a new line
*/

void print_alphabet(void)
{
	char alph;
i
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
