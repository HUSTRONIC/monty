#include "monty.h"
/**
 * func_pop - This will print the top
 * @head: The head of the stack
 * @counter: Number of line
 * Return: Null
*/
void func_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		func_stack(head, counter);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
