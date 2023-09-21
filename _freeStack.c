#include "monty.h"
/**
* _freeStack - frees a doubly linked list.
* @head: head of the stack.
*/
void _freeStack(stack_t *head)
{
	stack_t *a_u_x;

	a_u_x = head;
	while (head)
	{
		a_u_x = head->next;
		free(head);
		head = a_u_x;
	}
}
