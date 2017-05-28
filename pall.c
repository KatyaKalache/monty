#include "monty.h"
void pall(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *to_print;
	to_print = *stack;

	while (to_print != NULL)
	{
		printf("i am in pall %d\n", to_print->n);
		to_print = to_print->next;
	}
}
