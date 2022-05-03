#include <stdio.h>
/**
 *main - recieves the program name as a parameter and prints it out
 *@argc: argument count
 *@argv: array of strings
 *Return: 0
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
