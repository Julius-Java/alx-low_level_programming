#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: destination string
 *@src: string to be concatenated
 *Return: dest string
 */
char *_strcat(char *dest, char *src)
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
	for (add = 0; add <= len_src; add++)
	{
		dest[len_dest + add] = src[add];
	}
	return (dest);
}
