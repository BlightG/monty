#include "monty.h"

void pint(stack_t **TOP, unsigned int line_count)
{
	if (*TOP == NULL)
	{
		fprintf(stderr, "L<%d>:\
			can't pint, stack empty\n", line_count);
		freestack(*TOP);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*TOP)->n);
}
