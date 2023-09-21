#include "monty.h"


/**
 * _push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void _push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (afc.arg)
	{
		if (afc.arg[0] == '-')
			j++;
		for (; afc.arg[j] != '\0'; j++)
		{
			if (afc.arg[j] > 57 || afc.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(afc.file);
			free(afc.content);
			_freeStack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(afc.file);
		free(afc.content);
		_freeStack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(afc.arg);
	if (afc.lifi == 0)
		_addnode(head, n);
	else
		_addqueue(head, n);
}
