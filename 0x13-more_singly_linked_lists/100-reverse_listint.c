#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: A pointer to listint_t structure
 * Return: A pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *n = NULL;


	if(!head || !(*head))
		return (*head);

	n = (*head)->next;

	while (n->next)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	if (n)
		n->next = p;

	return (*head);
}
