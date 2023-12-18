#include "monty.h"
/**
* func_stack_free - This function will frees
* a doubly linked list
* @head: The required stack head
*/
void func_stack_free(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
