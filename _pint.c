#include "monty.h"


/**
 * _pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void _pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(afc.file);
		free(afc.content);
		_freeStack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
