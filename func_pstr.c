#include "monty.h"
/**
 * func_pstr - This function prints the required string
 * starting at the top of the stack.
 * @head: the required Head of the stack
 * @counter: Number of the line
 * Return: Nothing
*/
void func_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}