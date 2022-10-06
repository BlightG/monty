#include "monty.h"
int checkint (char *command, int i);
int checkint (char *command, int i)
{
	int n;
        char *opint;

	/*if(command[i])
        {*/
        opint = malloc(sizeof(char) * (strlen(command) - i));
        while (isdigit(command[i]) || command[i] == '-')
                i++;
        printf("i %d streln command: %d",i, (int) strlen(command));
        if (i != (int) strlen(command) && command[i] != ' ')
        {
		printf("invalid number %s", command);
                exit (EXIT_FAILURE);
        }
        n = (int) strtol(command, NULL, 10);
        free(opint);
        return (n);
	
}
int cmd2struct(char *command, char *fileop)
{
	int i, j;
	
	if (command == NULL)
		exit(0);
	i = j = 0;
	while (command[i] != ' ' && command[i] != '\0' && command[i] != '$')
	{
		fileop[i] = command[i];
		i++;
	}
	/*opint = malloc(sizeof(char) * (strlen(command) - i));*/
	if (strcmp(fileop, "push") == 0)
		return (checkint(command, i));
	else
		printf("exit failure");
	return (0);	
	
}
