#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns count of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: The number of elements in the list pointed by h
 */
size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);
}

