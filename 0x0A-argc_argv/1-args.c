#include <stdio.h>
/**
 *main - function prints the number of arguments passed to it
 *@argc: variable holds the number of arguments passed to the function
 *@argv: variable holds the arguments/string value
 *Return: 0
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	if (argc > 1)
	{
	printf("%d\n", argc - 1);
	}
	else
	{
		printf("%d", 0);
	}
	return (0);
}
