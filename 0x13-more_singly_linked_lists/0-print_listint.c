#include "lists.h"

/**
 * function that prints all the elements of a listint_t list.
 * print_listint - prints all the elements of a listint_t list
 * @h: Pointer to the listint_t list to print
 * Return: The number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0; /* Variable to store the number of nodes printed */
const listint_t *node; /* Pointer to traverse the list */

/* Loop through the list until the end */
for (node = h; node != NULL; node = node->next)
{
/* Print the data of each node using a macro */
PRINT(node);
num++; /* Increment the count */
}
return (num); /* Return the count */
}
