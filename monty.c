 #include "monty.h"

int main(int argc, char **argv)
{
	FILE *file_to_open;
	int read;
	char *line = NULL;
	size_t len = 0;
	char *token;
	int to_num;
	stack_t *stack = NULL;
	int count = 0;
	char *opcode = NULL;
	unsigned int line_number = 0;

/*	stack_t *to_print; */
	if (argc == 0)
	{
		EXIT_FAILURE;
	}
/* open the file .m */
	file_to_open = fopen(argv[1], "r");
/* read files content */
	while ((read = getline(&line, &len, file_to_open)) != -1)
	{
		line_number++;
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
		else
			op_func(opcode, &stack, line_number);
/*
		{
			to_print = stack;
			while (to_print != NULL)
			{
				printf("this is pall %d\n", to_print->n);
				to_print = to_print->next;
			}
			} */
	}
	exit (EXIT_SUCCESS);
	count++;
	return (0);
}
