#include "monty.h"
void pushint(stack_t **TOP, unsigned int line_count, int n)
{
	stack_t *new;

	printf("push\n");
	new = malloc(sizeof(stack_t));
	if (!new)
        {
                printf("Error: malloc failed %d", line_count);
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