#include "main.h"

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char task_zero[8] = "_putchar";
	int i = 0;

	while (task_zero[i] != '\0')
	{
		_putchar(task_zero[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
