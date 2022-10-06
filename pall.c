#include "monty.h"
/**
 * pall - function that prints all of stack value
 * 
 * @TOP: pointer to top of stack
 * @line_count: count of lines printed
 */ 
void pall(stack_t **TOP, __attribute__ ((unused)) unsigned int line_number)
{
	stack_t *temp;

	temp = *TOP;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
