#include "monty.h"

int main (int argc, char *argv[])
{
	FILE *file;
	stack_t *TOP;
	char line[100], command[15], fileop[8];
	int n;
	unsigned int line_count = 0;
	
	TOP = NULL;
	if (argc != 2)
	{
		perror("USAGE: monty file");
		exit (EXIT_FAILURE);
	}		
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file <%s>", argv[1]);
		exit (EXIT_FAILURE);
	}
	while(fgets(line, sizeof(line), file))
	{
		line_count++;
		memset(command, 0, 14);
		memset(fileop, 0, 8);
		line2cmd(line, command);
		n = cmd2struct(command, fileop);
		strctarray(&TOP, fileop, line_count, n);
	}
	fclose(file);
	freestack(TOP);
	return (0);
}
