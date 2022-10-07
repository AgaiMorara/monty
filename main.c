#include "monty.h"
#include <stdio.h>

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
	char *line = NULL, *testr = NULL;
	FILE *fp;

	if (argc < 2)
	{
		fprintf(stderr, "monty file");
		exit (EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (!fp)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		return EXIT_FAILURE;
	}
	while ((nget = getline(&line, &buff, fp)) > 0)
		{
			testr = malloc(sizeof(char) * nget + 1);
			_strcpy(testr, line);
			breakdown(testr);
			free(testr);
		}
		free(line);
		return (0);
}
