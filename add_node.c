#include "monty.h"
void add_node(stack_t **head, __attribute__ ((unused))unsigned int line_number, int n)
{
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	printf("this is the node %d\n", new_node->n);
}
