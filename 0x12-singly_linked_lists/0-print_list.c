#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements
 * @h: Pointer to the list_t list to print
 * the number of nodes
 * Return: The number of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t count = 0;  /*Renamed 's' to 'count' for clarity*/

while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
count++;
}

return count;
}
