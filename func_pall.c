#include "monty.h"
/**
 * func_pall - This will print the stack
 * @head: Head of the stack
 * @counter: will not be used
 * Return: nothing
*/
void func_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
