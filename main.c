#include <stdio.h>
#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main -this is the function for the
* monty code interpreter
* @argc: Argument number
* @argv: the location for monty files
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *content;
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
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		counter++;
		if (read_line > 0)
		{
			func_exec(content, &stack, counter, file);
		}
		free(content);
	}
	func_stack_free(stack);
	fclose(file);
return (0);
}
