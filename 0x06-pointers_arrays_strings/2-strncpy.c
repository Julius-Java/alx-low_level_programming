#include "main.h"
/**
 *_strncpy - copies a string from one array to another
 *@dest: destination array after copying
 *@src: source array that is copied
 *@n: number of characters to be copied
 *Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int add;

	for (add = 0; add < n && src[add] != '\0'; add++)
	{
		dest[add] = src[add];
	}
	for (; add < n; add++)
	{
		dest[add] = '\0';
	}
	return (dest);
}
