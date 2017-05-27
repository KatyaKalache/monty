#include "monty.h"
int add_node(stack_t **head, int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));

/*	if (new_node == NULL)
	{
		return (NULL);
		} */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	printf("this is the node %d\n", new_node->n);
	return (0);
}
