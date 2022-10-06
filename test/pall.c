#include "monty.h"

void pall(stack_t **TOP, __attribute__ (( unused )) unsigned int line_number)
{
        stack_t *temp;
	
	temp = *TOP;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
