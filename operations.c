#include "monty.h"

void push(stack_t **top, unsigned int line_number)
{
	stack_t *temp = malloc(sizeof(stack_t));
	if (!temp)
	{
		fprintf(stderr, "malloc failed");
		exit(EXIT_FAILURE);
	}

	if (value >= 0)
		temp->n = value;
	else
	{
		fprintf(stderr, "L %d : Usage : push integer", line_number);
		EXIT_FAILURE;
	}
	if (!(*top))
	{
		temp->next = NULL;
		temp->prev = NULL;
		*top = temp;
	}
	else
	{
		temp->next = *top;
		*top =  temp;
	}
}

void pall(stack_t **top, unsigned int line_number)
{
	stack_t *temp;
	temp = *top;
	if (!temp)
		return;
	if (dum == 1)
		fprintf(stderr, "L <%d>: unknown instruction %s pall", line_number, ins); 
	while (temp)
	{
		printf("%d\n", temp->n );
		temp = temp->next;
	}
}
void pint(stack_t **top, unsigned int line_number)
{

	if (!(*top))
	{
		fprintf(stderr, "L<%u>: Can't pint, stack empty d\n", line_number);
		exit (EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}

void pop(stack_t **top, unsigned int line_number)
{

	if (!(*top))
	{
		fprintf(stderr," can't pop an empty stack %d\n", line_number);
		exit (EXIT_FAILURE);
	}
	value = (*top)->n;
	*top = (*top)->next;
	printf ("%d", value);
}
void swap(stack_t **top, unsigned int line_number)
{
	stack_t *first, *second;
	if (!((*top)->next))
	{
		fprintf(stderr, "can't swap, stack too short %d \n", line_number);
		exit (EXIT_FAILURE);
	}
	first = (*top)->next;
	second = *top;
	second->next = first->next;
	*top = first;
	(*top)->next = second;
}
