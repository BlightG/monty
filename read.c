#include "monty.h"
/**
 * main - Entry-point for monty interpreter
 *  
 * @argc: count of arguments passed to interpreter
 * @argv: location of file to be checked:
 * 
 * Return: Always return 0 if succesfull
*/
int main(int argc, char *argv[])
{
	FILE *file;
	stack_t *TOP;
	char line[100], command[40], fileop[40];
	int n;
	unsigned int line_count = 0;

	TOP = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file <%s>\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(line, sizeof(line), file))
	{
		line_count++;
		memset(command, 0, 14);
		memset(fileop, 0, 8);
		if (line2cmd(line, command) == NULL)
		{
			memset(command, 0, 40);
			memset(fileop, 0, 40);
			continue;
		}
		n = cmd2struct(TOP, command, fileop, line_count);
		strctarray(&TOP, fileop, line_count, n);
	
	}
	fclose(file);
	freestack(TOP);
	return (0);
}
