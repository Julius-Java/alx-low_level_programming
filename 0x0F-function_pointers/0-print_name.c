#include "main.h"
/**
 *print_name - function prints name
 *@name: pointer to name
 *@f: pointer to function that prints name
 *Result: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
