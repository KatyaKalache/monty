#include "monty.h"
int op_func(char *opcode, stack_t **stack, unsigned int line_number)
{
	instruction_t op_codes[] = {
		{"pall", pall},
		{NULL, NULL}
	};
	unsigned int i = 0;
	printf("i am in opcode");

	while (op_codes[i].opcode)
	{
		if (strcmp(opcode, op_codes[i].opcode) == 0)
		{
			(op_codes[i].f)(stack, line_number);
			exit (EXIT_SUCCESS);
		}
		i++;
	}
	exit (EXIT_FAILURE);
}
