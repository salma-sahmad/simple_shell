#include "shell.h"

/**
 * tokensize - tokensizes a string
 * @buf : bufferto store to stpore the input 
 *return : pointer to an array of strings
*/

char **tokenize(char *buf)
{
	char **tokens = NULL;
	char *token = NULL;
	int i = 0;
	tokens = malloc(sizeof(char *)) * 1024);
	if (tokens == NULL)
	{
		perror("Error");
		return (NULL);
	}
	token = strtock(buf, " \t\n");
	while (token != NULL)
	{
		tokens[i] = token;
		token = strtock(NULL, " \t\n");
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}
