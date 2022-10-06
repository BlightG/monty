#include "monty.h"
/**
         * take line as input
         * start while loop
         * put all files that are not empty lines
         */
char *line2cmd(char *line, char *command)
{
        
        printf("line: '%s', strlenline: %d", line,(int) strlen(line));
        if (strlen(line) < 2  || line == NULL)
                return (NULL);
        strcat(strtok(line, " "),command);
        printf("command: %s  ", command);
        strcat(strtok(NULL, " "),command);
        printf("command: %s  ", command);
        /*while (line[i] != '\0')
        {
                while (line[i] != ' ')
                {
                        command[j] = line[i];
                        j++;
                        if (line[i++] != ' ')
                        {      
                                command[j] = ' ';
                                i++;
                        }
                }
                i++;
        }*/
        return (command);
}