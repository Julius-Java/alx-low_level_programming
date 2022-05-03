#include <stdio.h>
/**
 *main - recieves the program name as a parameter and prints it out
 *@argc: argument count
 *@argv[]: array of strings 
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
