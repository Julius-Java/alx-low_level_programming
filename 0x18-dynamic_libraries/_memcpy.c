#include "main.h"
/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *@dest: destination memory
 *@src: source memory
 *@n: number of bytes to be copied from source
 *Return: destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i <  (int) n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
