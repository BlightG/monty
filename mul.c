#include "monty.h"
/**
 * mul - function that muls to top of stack
 * 
 * @TOP: pointer to top of stack
 * @line_count: count of lines printed
 */ 
void mul(stack_t **TOP, unsigned int line_count)
{
	stack_t *first, *second;

	if (*TOP == NULL || (*TOP)->next == NULL)
	{
	fprintf(stderr, "L<%d>: can't mul, stack too short\n", line_count);
		freestack(*TOP);
		exit(EXIT_FAILURE);
	}

	first = *TOP;
	second = (*TOP)->next;
	second->n = first->n * second->n;
	pop(TOP, line_count);
}
