#include "monty.h"

int main(int argc, char **argv)
{
	FILE *file_to_open;
	int read;
	char *line = NULL;
	size_t len = 0;
	char *token;
	int to_num;
	stack_t *stack;
	int count = 0;
	stack_t *to_print;
	char *opcode;
	unsigned int line_number;
	if (argc == 0)
	{
		EXIT_FAILURE;
	}
/* open the file .m */
	file_to_open = fopen(argv[1], "r");
/* read files content */
	while ((read = getline(&line, &len, file_to_open)) != -1)
	{
/*		printf("read %d\n", read); */
/*		printf("%s", line); */

		token = strtok(line, DELIMITER);

	       	if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, DELIMITER);
			/*	printf("%s\n", token); */
			to_num = atoi(token);
/* add to stack */
			add_node(&stack, to_num);
		}
/*		printf("value of to_num %d\n", to_num); */
/* printf("%d", to_num); */
	}
	op_codes(opcode, &stack, line_number);
	return (0);
}
