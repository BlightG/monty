#include "monty.h"

int main (void)
{
	FILE *file;
	stack_t *TOP;
	char line[100], command[15], fileop[8];
	int n;
	unsigned int line_count = 0;
	
	TOP = NULL;
	file = fopen("reading_sample.m", "r");
	if (file == NULL)
	{
		perror("unable to open file: ");
		return (EXIT_FAILURE);
	}
	while(fgets(line, sizeof(line), file))
	{
		/*command = malloc(sizeof(char) * 15);*/
		line_count++;
		printf("%s", line);
		memset(command, 0, 14);
		memset(fileop, 0, 8);
		line2cmd(line, command);
		n = cmd2struct(command, fileop);
		strctarray(&TOP, fileop, line_count, n);
		n = 0;
		/*free(command);*/
	}
	fclose(file);
	freestack(TOP);
	return (0);
}
