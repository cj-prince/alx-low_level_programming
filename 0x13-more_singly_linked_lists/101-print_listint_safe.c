#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - A function that prints the elementsin a  list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. Exits with 98 on failure
 */
size_t print_listint_safe(const listint_t *head)
{
	int diff;

	register short count = 0;

	while (head)
	{
		diff = head - head->next;
		count++;
		printf("[%p] %i\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %i\n", (void *)head->next, head->next->n);
			break;
		}

	}
	return (count);
}
