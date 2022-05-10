#include <stdlib.h>
#include "main.h"
/**
 *_calloc - function allocates memory space to an array using malloc
 *@nmemb: number of bytes to be allocated
 *@size: data type of number of bytes to be allocated
 *Return: pointer to the allocated memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	ptr = malloc(nmemb * sizeof(size));

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (count = 0; count < nmemb; count++)
		{
			ptr[count] = 0;
		}
	}
	return (ptr);
}
