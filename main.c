#include "monty.h"
/**
 *free_dlistint - frees a doubly linked list
 *@head: entry point to list
 */
void free_dlistint(stack_t *head);
void free_dlistint(stack_t *head)
{
	if (head)
	{
		if (head->next != NULL)
			free_dlistint(head->next);
		free(head);
	}
}
/**
 * main - entry point to compiling our shell
 * @argc:  argument count
 * @argv: argument vector
 *Return: 0 when successful, -1 otherwise
 */

int main(int argc, char **argv __attribute__((unused)))
{
	int nget;
	size_t buff = 0;
	char *line = NULL, *testr = NULL, *trimmed;
	FILE *fp;
	line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit (EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return EXIT_FAILURE;
	}
	while ((nget = getline(&line, &buff, fp)) > 0)
		{
			testr = malloc(sizeof(char) * nget + 1);
			trimmed = line;
			while (*trimmed == ' ' || *trimmed == '\t')
				trimmed++;
			if (*trimmed == '\n' || *trimmed == '\0')
				continue;
			_strcpy(testr, trimmed);
			line_number++;
			breakdown(testr);
			free(testr);
		}
	free_dlistint(top);
	free (line);
	fclose(fp);
	return (0);
}
