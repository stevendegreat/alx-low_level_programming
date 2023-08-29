#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 *  linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

return (0);
if (!head || !*head)

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
