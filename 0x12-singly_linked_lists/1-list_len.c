#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements.
 * @h: Pointer to the list_t list
 *
 * Return: Number of elements in 'h'
 */
size_t list_len(const list_t *h)
{
size_t count = 0;  /* Renamed 'n' to 'count' for clarity*/

while (h != NULL)
{
count++;
h = h->next;
}

return count;
}
