#include "monty.h"
/**
 * func_queue - This function will print top
 * @head: This id the head of the stack
 * @counter: the rquired number of the line
 * Return: Nothing
*/
void func_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * func_addqueue - The function that will add
 * node to the tail stack
 * @n: the required new value
 * @head: thi is trhe head of stack
 * Return: Nothing
*/
void func_addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
