#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * if the list is empty, return 0
 * function that returns the sum of all the data (n) of a listint_t linked list.
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int sum = (0);
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
