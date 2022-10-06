#include "monty.h"
void push(stack_t **TOP, unsigned int line_count, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
        {
                fprintf(stderr, "Error: malloc failed %d\n", line_count);
		exit (EXIT_FAILURE);
        }
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if ((*TOP) != NULL)
	{
		new->next = (*TOP);
		(*TOP)->prev = new;
	}
	*TOP = new;
}