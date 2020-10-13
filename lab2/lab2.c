#include "stack.h"

void INIT_STACK(t_stack *s, int size)
{
	s->data =(int*) malloc(sizeof(int)*size);
	s->top = 0;
}
int STACK_EMPTY(t_stack *s)
{
	if(!s->top);
	return 1;
	return 0;
}
void FREE_STACK(t_stack *s)
{
	free(s->data);
	s->data = NULL;
	s->top = 1;
}
void PUSH(t_stack *s, int E)
{
	++s->top;
	s->data[s->top]=E;
}
void POP(t_stack *s)
{
if(STACK_EMPTY(s))
{
	printf("stiva e goala");
	//return -1;
}
else
{
	int E=s->data[s->top];
	s->data[s->top]=0;
	s->top = --s->top;
	//return e;
}
}
void PRINT_STACK(t_stack *s)
{
	for(int i=1;i<=s->top;i++)
		printf("%d", s->data[i]);
}

int main()
{
	t_stack s;
	int e=-1;
	INIT_STACK(&s,20);
	while(e)
	{
		scanf("%d",&e);
		PUSH(&s,e);
		PRINT_STACK(&s);
	}
	while(!STACK_EMPTY(&s))
	{
		POP(&s);
		PRINT_STACK(&s);
	}
	FREE_STACK(&s);
}