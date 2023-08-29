#include "lists.h"

/**
 * function that prints all the elements of a listint_t list.
 * print_listint - prints all the elements of a listint_t list
 * @h: Pointer to the listint_t list to print
 * Return: The number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}

return (num);
}
