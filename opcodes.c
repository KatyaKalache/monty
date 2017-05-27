#include "monty.h"
void op_codes(char *opcode, stack_t **stack, unsigned int line_number)
{
	printf("test");
	int i = 0;
	instruction_t op_codes[] = {
		{"pall", pall},
		{NULL, NULL}
	};
	while (op_codes[i].opcode != NULL)
	{
		if (strcmp(opcode, op_codes[i].opcode) == 0)
		{
			(op_codes[i].f)(stack, line_number);
		}
		i++;
	}
}
