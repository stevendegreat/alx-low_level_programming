#include <stdio.h>
#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list
* @h: Pointer to the list_t list to print
* Return: The number of nodes printed
*/
size_t print_list(const list_t *h)
{
size_t count = 0; /* Variable to store the number of nodes printed */
const list_t *node; /* Pointer to traverse the list */

/* Loop through the list until the end */
for (node = h; node != NULL; node = node->next)
{
/* Print the length and the string of each node */
printf("[%u] %s\n", node->len, node->str ? node->str : "(nil)");
count++; /* Increment the count */
}
return count; /* Return the count */
}
