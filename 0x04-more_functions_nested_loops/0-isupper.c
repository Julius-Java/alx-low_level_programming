#include "main.h"



int _isupper(int c)
{
	char upper;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			return (1);
		}
	}

	return (0);
}
