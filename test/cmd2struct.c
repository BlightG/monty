#include "monty.h"

int cmd2struct(char *command, char *fileop)
{
	int i, j, n;
	char *opint;

	if (command == NULL)
		exit(0);
	i = j = 0;
	while (command[i] != ' ' && command[i] != '\0' && command[i] != '$')
	{
		fileop[i] = command[i];
		i++;
	}
	opint = malloc(sizeof(char) * (strlen(command) - i));
	/*i++*;*/
	while(command[i] != '\0')
	{
		opint[j] = command[i];
		i++;
		j++;
	}
	n = atoi(opint);
	printf(" fileop: '%s' n: '%d' \n", fileop, n);
	free(opint);
	return (n);
}
