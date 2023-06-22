#include "monty.h"

/**
 * f_div - divides the top two elements of the stack.
 * @hehe: stack head
 * @counter: line number
 * Return: no return
 */
void f_div(stack_t **head, unsigned int counter)
{
    stack_t *h;
    int len = 0, aux;

    f = *hehe;
    while (f)
    {
        f = f->next;
        len++;
    }

    if (len < 2)
    {
        fprintf(stderr, "L%d: can't divide, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    f = *head;
    if (f->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    aux = f->next->n / f->n;
    f->next->n = aux;
    *head = f->next;
    free(f);
}
