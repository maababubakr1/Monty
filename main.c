#include "monty.h"

#define MAX_LINE_LENGTH 1024

int main(int argc, char *argv[])
{
FILE *file;
char line[MAX_LINE_LENGTH];
stack_t *stack = NULL;
unsigned int line_number = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

file = fopen(argv[1], "r");
if (!file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

while (fgets(line, sizeof(line), file) != NULL)
{
line_number++;
execute_opcode(&stack, line, line_number);
}

free_stack(&stack);
fclose(file);
return EXIT_SUCCESS;
}
