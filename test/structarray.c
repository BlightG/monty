#include "monty.h"

int strctarray(stack_t **TOP, char *fileop, unsigned int line_count, int n)
{
	int i;
	instruction_t myfunctions[3] = {{"pall", pall},
					{"pint", pint}};

	if(strcmp(fileop, "push") == 0)
	{
		push(TOP, line_count, n);
		return (0);
	}
	for (i = 0 ; i < 2 ; i++)
	{ 
		if (strcmp(fileop, myfunctions[i].opcode) == 0)
		{
			myfunctions[i].f(TOP, line_count);
			return (0);
		}
	}
	fprintf(stderr, "L<%d>: unknown instruction <%s>", n, fileop);
	exit (EXIT_FAILURE);
	
}
