#include "sort.h"
/**
 * swap - function that swaps 2 nodes in a doubly linked list
 * @l1: address to the first node.
 * @l2: address to the second node.
 *
 * Return: void
 */
void swap(listint_t *l1, listint_t *l2)
{
	if (l1->prev)
		l1->prev->next = l2;
	if (l2->next)
		l2->next->prev = l1;
	l1->next = l2->next;
	l2->prev = l1->prev;
	l1->prev = l2;
	l2->next = l1;
}
/**
 * insertion_sort_list - s function that sorts
 * a doubly linked list in ascending orde
 * @list: a pointer to a pointer to the head of the list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	i = (*list)->next;
	while (i)
	{
		j = i;
		i = i->next;
		while (j && j->prev)
		{
			if (j->prev->n > j->n)
			{
				swap(j->prev, j);
				if (!j->prev)
					*list = j;
				print_list(*list);
			}
			else

			j = j->prev;
		}
	}
}
