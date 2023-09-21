#include "monty.h"
bus_t afc = {NULL, NULL, NULL, 0};
/**
* main - .
* @argc: .
* @argv: .
* Return: .
*/
int main(int argc, char *argv[])
{
	char *line;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	afc.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		line = NULL;
		read_line = getline(&line, &size, file);
		afc.content = line;
		counter++;
		if (read_line > 0)
		{
			execute(line, &stack, counter, file);
		}
		free(line);
	}
	_freeStack(stack);
	fclose(file);
return (0);
}
