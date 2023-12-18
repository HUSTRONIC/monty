#include "monty.h"
/**
 * func_pchar - the required function that prints the char
 * at the top of the stack.
 * @head: the required head of the stack
 * @counter: number of the line
 * Return: Nothing
*/
void func_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		func_stack(head, counter);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		func_stack(head, counter);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
