#include "lists.h"
#include <stdio.h>

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
 * function that reverses a listint_t linked list.
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 * declare a maximum of two variables in your function
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *tortoise, *hare;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

tortoise = head->next;
hare = (head->next)->next;

while (hare)
{
if (tortoise == hare)
{
tortoise = head;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
hare = hare->next;
}

tortoise = tortoise->next;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
}

return (nodes);
}

tortoise = tortoise->next;
hare = (hare->next)->next;
}

return (0);
}

/**
 * function that reverses a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * print_listint_safe - Prints a listint_t list safely.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}
