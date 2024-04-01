#include "monty.h"

/**
 * execute_opcode - Parses and executes the opcode from a line of input.
 * @stack: Pointer to the head of the stack.
 * @line: Line containing the opcode and its arguments.
 * @line_number: Line number being executed from the Monty file.
 */
void execute_opcode(stack_t **stack, char *line, unsigned int line_number)
{
char *opcode;
instruction_t opcodes[] = {
{"push", push},
{"pall", pall},
{"pint", pint},
{"pop", pop},
{"swap", swap},
{"add", add},
{"nop", nop},
{NULL, NULL}
};
int i = 0;

opcode = strtok(line, " \n");
if (!opcode || *opcode == '#')
return;

while (opcodes[i].opcode)
{
if (strcmp(opcodes[i].opcode, opcode) == 0)
{
        opcodes[i].f(stack, line_number);
        return;
}
i++;
}

fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
exit(EXIT_FAILURE);
}
