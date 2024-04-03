#include "monty.h"

/**
 * free_stack - free double linked list
 * @head: first node of a stack
 * Return: none
*/

void free_stack(stack_t *head)
{
stack_t *tmp;

tmp = head;
while (head)
{
tmp = head->next;
free(head);
head = tmp;
}
}

/**
 * f_stack - free stack
 * @head: first node
 * @counter: line counter
 * Return: none
*/

void f_stack(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;

bus.lifi = 0;
}