#include "monty.h"
/**
 * _swap - adds the top two elements of the stack.
 * @head: stack head.
 * @counter: line_number.
 * Return: .
*/
void _swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int leng = 0, a_u_x;

	h = *head;
	while (h)
	{
		h = h->next;
		leng++;
	}
	if (leng < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(afc.file);
		free(afc.content);
		_freeStack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	a_u_x = h->n;
	h->n = h->next->n;
	h->next->n = a_u_x;
}
