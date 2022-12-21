#include "lists.h"

/**
 * is_pal - matches and returns if palindrome
 * @tmp: ptr to head of list (copy, not modifying)
 * @reversed: ptr to head of reversed list
 * Return: 0 if not, 1 if yes
 */
int is_pal(listint_t *tmp, listint_t *reversed)
{
	while (reversed != NULL)
	{
		if (reversed->n != tmp->n)
			return (0);
		reversed = reversed->next;
		tmp = tmp->next;
	}
	return (1);
}

/**
 * reverse - reverses linked list starting at ptr given
 * @midway_head: ptr to the middle of the linked list
 * Return: return head of reversed list (tail of original list)
 */
listint_t *reverse(listint_t *midway_head)
{
	listint_t *prev = NULL;
	listint_t *curr = midway_head;
	listint_t *next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

