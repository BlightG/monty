#include "monty.h"

/**
 * rotl - Function that rotate the *TOP of the*TOP
 * *TOP:*TOP structure
 * @line_number: number of instruction
 */

void rotl(stack_t **TOP, __attribute__ ((unused)) unsigned int line_count)
{
	stack_t *temp = NULL;

	if (*TOP == NULL)
		return;
	if ((*TOP)->next == NULL)
		return;

	temp = (*TOP);
	for (; temp->next; temp = temp->next)
		;

	temp->next = *TOP;
	(*TOP)->prev = temp;
	temp = (*TOP)->next;
	(*TOP)->next = NULL;
	temp->prev = NULL;
	*TOP = temp;
}