#include "monty.h"

int strctarray(stack_t **TOP, char *fileop, unsigned int line_count, int n)
{
	int i;
	instruction_t myfunctions[3] = {{"pall", pallvoid},
					{"pint", pint}};

	if(strcmp(fileop, "push") == 0)
	{
		pushint(TOP, line_count, n);
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
	printf("invalid opcode @ line %d\n", line_count);
	return (1);
	
}
