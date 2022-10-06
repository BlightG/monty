#include "monty.h"

char *line2cmd(char *line, char *command)
{
        /**
         * take line as input
         * start while loop
         * put all files that are not empty lines
         */
        int i, j;

        i = j = 0;
        printf("line: '%s', strlenline: %d", line,(int) strlen(line));
        if (strlen(line) <= 2)
                return (NULL);
        while (line[i] != '\0' || line[i] !='\n' || line[i] != '$')
        {
                while (line[i] != ' ')
                {
                        command[j] = line[i];
                        j++;
                        i++;
                }
                i++;
                command[j] = ' ';
        }
        return (command);
}