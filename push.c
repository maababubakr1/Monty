#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @stack: Double pointer to the head of the stack.
 * @line_number: Line number being executed from the Monty file.
 */
void push(stack_t **stack, unsigned int line_number)
{
char *arg = strtok(NULL, " \n");
int value;

if (!arg || !isdigit(*arg))
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}

value = atoi(arg);
if (!(*stack = malloc(sizeof(stack_t))))
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

(*stack)->n = value;
(*stack)->prev = NULL;
if ((*stack)->next)
(*stack)->next->prev = *stack;
(*stack)->next = *stack;
}

