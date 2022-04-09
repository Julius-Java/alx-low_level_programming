#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char rev_alph;

	for (rev_alph = 'z'; rev_alph >= 'a'; rev_alph--)
	{
		putchar(rev_alph);
	}
	putchar('\n');

	return (0);
}
