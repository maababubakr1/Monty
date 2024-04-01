#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Pointer to the head of the stack.
 * @line_number: Line number being executed from the Monty file.
 */
void pint(stack_t **stack, unsigned int line_number)
{
if (!*stack)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}

printf("%d\n", (*stack)->n);
}
