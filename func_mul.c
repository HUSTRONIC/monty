#include "monty.h"
/**
 * func_mul - This will do the required multiplication of
 * the top two elements of the stack.
 * @head: the required head of the stack
 * @counter: The number of the line
 * Return: Nothing
*/
void func_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		func_stack(head, counter);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
