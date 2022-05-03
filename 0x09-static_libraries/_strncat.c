#include "main.h"
/**
 * _strncat - concatenates n characters to the dest string
 * @dest:  destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 * Return: destination string after concatenating n characters
 * ..from string to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest;
	int len_src;
	int add;

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	len_src = 0;
	while (src[len_src] != '\0')
	{
		len_src++;
	}

	for (add = 0; add < n && src[add] != '\0'; add++)
	{
		dest[len_dest + add] = src[add];
	}
	return (dest);
}
