#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @n: data to insert in the new element
 * @head: pointer to the first element in the list
 * function that adds a new node at the end of a listint_t list.
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *temp = *head;
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (temp->next)
temp = temp->next;

temp->next = new;

return (new);
}
