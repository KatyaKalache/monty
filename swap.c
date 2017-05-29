#include "monty.h"
/**
 * swap - swaps the top two elements of the stack
 * @stack: keeps values
 * @line_number: counting lines
 * Return: nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *to_swap;
	int to_swap_1;
	int to_swap_2;

	to_swap = *stack;
/*check if stack contains no less than 2 integers */
	if (to_swap != NULL && to_swap->next->next != NULL)
	{
/* assigning value 1 to first, value 2(next after first) to second */
		to_swap_1 = to_swap->n;
		to_swap_2 = to_swap->next->n;
/*		printf("first %d\n second %d\n", to_swap_1, to_swap_2); */
/* giving value of fist to second, and second to first */
		to_swap->n = to_swap_2;
		to_swap->next->n = to_swap_1;
	}
	else
	{
		printf("L%d: can't swap, stack too short", line_number);
		exit(EXIT_FAILURE);
	}
}
