#include "sort.h"
/**
 * insertion_sort_list - use insertion sort to sort a
 *						doubly linked list.
 *@list: the head of the list
 *print at every swap the whole list
 */



void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *pcurr;

	if (*list == NULL || list == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;

	while (curr != NULL)
	{
		pcurr = curr->prev;
		while (pcurr != NULL && pcurr->n > curr->n)
		{
			if (pcurr->prev != NULL)
				pcurr->prev->next = curr;
			else
				*list = curr;

			if (curr->next != NULL)
				curr->next->prev = pcurr;

			curr->prev = pcurr->prev;
			pcurr->next = curr->next;
			curr->next = pcurr;
			pcurr->prev = curr;
			print_list(*list);

			pcurr = curr->prev;
		}
		curr = curr->next;
	}
}
