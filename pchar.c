#include "monty.h"
/**
 * pchar - function that prints top of stack value
 *
 * @TOP: pointer to top of stack
 * @line_count: count of lines printed
 */
void pchar(stack_t **TOP, unsigned int line_count)
{
        if (*TOP == NULL)
        {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", line_count);
                freestack(*TOP);
                exit(EXIT_FAILURE);
        }
        if (isalpha((*TOP)->n))
                printf("%c\n", (*TOP)->n);
        else
        {
        fprintf(stderr,"L%d: can't pchar, value out of range", line_count);
                freestack(*TOP);
                exit(EXIT_FAILURE);
        }
}
