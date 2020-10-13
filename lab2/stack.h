#include<stdlib.h>
#include<stdio.h>

typedef struct stack 
{
int top;
int *data;
}t_stack;

void INIT_STACK(t_stack *s, int size);
void FREE_STACK(t_stack *s);
int STACK_EMPTY(t_stack *s);
void PUSH(t_stack *s, int E);
void POP(t_stack *s);
void PRINT_STACK(t_stack *s);
