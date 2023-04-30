#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *a, *cop = *head;
unsigned int nbr;

if (cop == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(cop);
return (1);
}

for (nbr = 0; nbr < (index - 1); nbr++)
{
if (cop->next == NULL)
return (-1);

cop = cop->next;
}

a = cop->next;
cop->next = a->next;
free(a);
return (1);
}
