#include "monty.h"
/**
 * add_z_t - add node to the head stack
 * @head: head of the stack
 * @zt: new_value
 * Return: no return
*/
void add_z_t(stack_t **head, int zt)
{

	stack_t *new_node, *taha;

	taha = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (taha)
		aux->prev = new_node;
	new_node->n = zt;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
