#include "monty.h"

void push(int a)
{
	nodePtr temp = malloc(sizeof(node));
	if (!temp)
	{
		fprintf(stderr, "malloc failed");
		exit (EXIT_FAILURE);
	}
	temp->value = a;
	if (!top)
	{
		temp->next = NULL;
		temp->previous = NULL;
		top = temp;
	}
	else
	{
		temp->next = top;
		top =  temp;
	}
}

void pall()
{
	if (!top)
		return;
	while (top)
	{
		printf("%d\n", top->value );
		top = top->next;
	}
}
void pint()
{
	int linecount = 0;

	if (!top)
	{
		fprintf(stderr, "L%d: Can't pint, stack empty", linecount);
		exit (EXIT_FAILURE);
	}
	printf("%d\n", top->value);
}
