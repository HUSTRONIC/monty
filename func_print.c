#include "monty.h"
/**
 * func_pint - This will print the top
 * @head: this is the head of the stack
 * @counter: number of line
 * Return: null
*/
void func_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		func_stack(head, counter);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
