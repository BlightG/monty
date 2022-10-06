#include "monty.h"
int checkint (char *command, int i, unsigned int line_count);
int checkint (char *command, int i, unsigned int line_count)
{
	int n;
	char *endptr;
        
	i++;
	if (isdigit(command[i]))
		n = (int) strtol(&command[i], &endptr, 10);
	else
	{
		fprintf(stderr, "L<%d>: usage: push integer\n", line_count);
                exit (EXIT_FAILURE);
	}	
	if (endptr[0] != 0 && endptr[0] != 10)
	{
		fprintf(stderr, "L<%d>: usage: push integer\n", line_count);
                exit (EXIT_FAILURE);
	}
   
        return (n);
	
}
int cmd2struct(char *command, char *fileop, unsigned int line_count)
{
	int i, j, n;
	
	i = j = 0;
	if (command == NULL)
		exit(0);
	while (command[i] != ' ' && command[i] != '\0' && command[i] != '$')
	{
		fileop[i] = command[i];
		i++;
	}
	printf("fileop: '%s'\n", fileop);
	if (strcmp(fileop, "push") == 0)
		n = checkint(command, i, line_count);
	return(n);
		
	
}
