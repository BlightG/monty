#include "monty.h"

char *line2cmd(char *line, char *command)
{
	int i, j;
	
	i = j = 0;
	/*if (!line)
	{
		printf("NO line value");
		return (NULL);
	}
	if (strlen(line) == 2)
	{
		printf("empty line\n");
		return (NULL);
	}*/
	while (line[i] == ' ')
		i++;
	if (line[i] == '\0' || line[i] == '$')
		return (NULL);
	while (line[i] != ' ' && line[i] != '\0' && line[i] != '\n')
	{
		command[j] = line[i];
		i++;
		j++;
	}
	while (line[i] == ' ')	
		i++;
	if (line[i] != '\0' || line[i] != '$')
	{
		command[j] = ' ';
		j++;
	}
	while (line[i] != ' ' && line[i] != '\0' && line[i] != '$')
	{
		command[j] = line[i];
		i++;
		j++;
	}
	return (command);
}
