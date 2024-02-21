#include "sort.h"

/**
 * swap_nodes - Swap 2 nodes in listint_t doubly-linked list
 * @h: ptr head of doubly-linked list
 * @n1: ptr 2 1st node to swap
 * @n2: 2nd node 2 flip
 * Return: no return statement
 */

void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
	{
		n2->next->prev = *n1;
	}
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
	{
		(*n1)->prev->next = n2;
	}
	else
	{
		*h = n2;
	}
	(*n1)->prev = n2;
	*n1 = n2->prev;
}



/**
 * insertion_sort_list - sorts ints doubly linked list in asc. order
 * @list: ptr 2 head of doubly linked list
 * Return: no return statement
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *iterata, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iterata = (*list)->next; iterata != NULL; iterata = temp)
	{
		temp = iterata->next;
		insert = iterata->prev;

		while (insert != NULL && iterata->n < insert->n)
		{
			swap_nodes(list, &insert, iterata);
			print_list((const listint_t *)*list);
		}
	}
}
