#ifndef MONTY_H
#define MONTY_H

void push_func(stack_t **head, unsigned int counter);
void pall_func(stack_t **head, unsigned int counter);
void pint_func(stack_t **head, unsigned int counter);
void pop_func(stack_t **head, unsigned int counter);
void swap_func(stack_t **head, unsigned int counter);
void add_func(stack_t **head, unsigned int counter);
void nop_func(stack_t **head, unsigned int counter);
void sub_func(stack_t **head, unsigned int counter);
void div_func(stack_t **head, unsigned int counter);
void mul_func(stack_t **head, unsigned int counter);
void mod_func(stack_t **head, unsigned int counter);
void pchar_func(stack_t **head, unsigned int counter);
void pstr_func(stack_t **head, unsigned int counter);
void rotl_func(stack_t **head,  __attribute__((unused)) unsigned int counter);
void rotr_func(stack_t **head, __attribute__((unused)) unsigned int counter);


#endif
