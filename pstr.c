#include "monty.h"
/**
 * pstr - function that prints top of stack value
 *
 * @TOP: pointer to top of stack
 * @line_count: count of lines printed
 */
void pstr(stack_t **TOP, __attribute__ ((unused)) unsigned int line_count)
{
        stack_t *temp;

        temp = *TOP;

        while(temp != NULL)
        {
                if (isalpha(temp->n))
                        printf("%c", temp->n);
                else
                        break;
                temp = temp->next;
        }
        printf("\n");
}
