#include "monty.h"

void pall(stack_t **TOP, unsigned int line_number)
{
        stack_t *temp;
	
	temp = *TOP;

	printf("pall\n");
	if (temp == NULL)
	{
		printf("invalid %d", line_number);
		exit (EXIT_FAILURE);
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
