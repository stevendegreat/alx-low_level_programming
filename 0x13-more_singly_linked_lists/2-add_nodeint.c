#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the first node in the list
 * @n: data to insert in that new node
 * function that adds a new node at the beginning of a listint_t list.
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->next = *head;
new->n = n;
*head = new;

return (new);
}
