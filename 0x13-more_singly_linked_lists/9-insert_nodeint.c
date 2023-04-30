#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nouv, *cop = *head;
unsigned int nbr;

nouv = malloc(sizeof(listint_t));
if (nouv == NULL)
return (NULL);

nouv->n = n;

if (idx == 0)
{
nouv->next = cop;
*head = nouv;
return (nouv);
}

for (nbr = 0; nbr < (idx - 1); nbr++)
{
if (cop == NULL || cop->next == NULL)
return (NULL);

cop = cop->next;
}

nouv->next = cop->next;
cop->next = nouv;

return (nouv);
}
