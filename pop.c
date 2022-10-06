#include  "monty.h"
void pop(stack_t **TOP, unsigned int line_count)
{
	stack_t *temp;

	if (*TOP == NULL)
	{
		fprintf(\
		stderr, "L<%d>: can't pop an empty stack\n", line_count);
		freestack(*TOP);
		exit(EXIT_FAILURE);
	}

	temp = *TOP;
	*TOP = temp->next;
	if (*TOP)
		(*TOP)->prev = NULL;
	free(temp);
}
