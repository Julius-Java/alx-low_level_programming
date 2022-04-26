#include "main.h"
/**
*_memset - fills memory with constant byte
*@s: memory to be filled
*@b: byte of characters to be filled
*@n: bytes of memory to be filled
*Return: pointer to memory filled
*/
char *_memset(char *s, char b, unsigned int n)
{
	int loop;

	for (loop = 0; loop < n; loop++)
	{
		s[loop] = b;
	}
	return (0);
}
