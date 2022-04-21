#include "main.h"
/**
 *swap_int - swaps the values of two integers
 *@a: number to be swapped
 *@b: number to be swapped
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
