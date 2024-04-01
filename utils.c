#include "monty.h"

/**
 * free_stack - Frees a stack.
 * @stack: Double pointer to the head of the stack.
 */
void free_stack(stack_t **stack)
{
stack_t *temp;

if (!stack)
return;

while (*stack)
{
temp = *stack;
*stack = (*stack)->next;
free(temp);
}
}
