#include "lists.h"
/**
 *list_len - function returns the number of elements in a linkeed list
 *@h: pointer to first node
 *Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t num_element = 0;

	while (h != NULL)
	{
		num_element++;
		h = h->next;
	}
	return (num_element);
}
