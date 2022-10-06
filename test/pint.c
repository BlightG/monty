#include "monty.h"

void pint(stack_t **TOP, unsigned int line_count)
{
        if (*TOP == NULL)
        {
                fprintf(stderr, "L<%d>: can't pint, stack empty", line_count);
                exit(EXIT_FAILURE);
        }
        printf("%d\n", (*TOP)->n);
}