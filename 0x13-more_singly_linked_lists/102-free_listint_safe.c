#include "lists.h"

/**
 * the size of the list that was free’d
 * @h:free_listint_safe - frees a linked list
 * pointer to the first node in the linked list
 * function that frees a listint_t list.
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *temp;
int diff;
size_t len = 0;


if (!h || !*h)
return (0);

while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}

*h = NULL;

return (len);
}
