#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *print_dog - function prints struct dog
 *@d: pointer to struct dog
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(98);

	if (d->name == NULL)
		printf("nil");

	else if (d->owner == NULL)
		printf("nil");
	else
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
}
