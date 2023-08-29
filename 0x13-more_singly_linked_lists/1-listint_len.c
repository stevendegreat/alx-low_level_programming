#include "lists.h"

/**
* listint_len - returns the number of elements in a listint_t list
* @h: Pointer to the listint_t list to traverse
* Return: The number of nodes
* function that returns the number of elements in a linked listint_t list.
*/
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}

return (num);
}
