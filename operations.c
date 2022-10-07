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
	nodePtr temp;
	temp = top;
	if (!top)
		return;
	while (temp)
	{
		printf("%d\n", temp->value );
		temp = temp->next;
	}
}
void pint()
{

	if (!top)
	{
		fprintf(stderr, "L: Can't pint, stack empty\n");
		exit (EXIT_FAILURE);
	}
	printf("%d\n", top->value);
}
int pop()
{
	int value;
	nodePtr temp;

	if (!top)
	{
		fprintf(stderr," can't pop an empty stack\n");
		exit (EXIT_FAILURE);
	}
	value = top->value;
	temp = top;
	top = top->next;
	free(temp);
	return (value);
}
void swap()
{
	nodePtr first, second;
	if (!(top->next))
	{
		fprintf(stderr, "can't swap, stack too short\n");
		exit (EXIT_FAILURE);
	}
	first = top->next;
	second = top;
	second->next = first->next;
	top = first;
	top->next = second;
}
