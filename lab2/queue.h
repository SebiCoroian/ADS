#include<stdlib.h>
#include<stdio.h>

typedef struct queue
{
int *data;
int head;
int tail;
int length;
}t_queue;

void INIT_QUEUE(t_queue *q, int INIT_SIZE);
void FREE_QUEUE(t_queue *q);
void ENQUEUE(t_queue *q, int E);
int DEQUEUE(t_queue *q);
void PTINT_QUEUE(t_queue *q);
int QUEUE_EMPTY(t_queue *q);

void INIT_QUEUE(t_queue *q, int INIT_SIZE)
{
	q->data =(int*) malloc(sizeof(int)*INIT_SIZE);
	q->head=0;
	q->tail=0;
	q->length=0;
}
void FREE_QUEUE(t_queue *q)
{
	free(q->data);
	q->data=NULL;
	q->head=-1;
	q->tail=-1;
}
void ENQUEUE(t_queue *q, int E)
{
	q->data[q->tail]=E;
	q->length=++q->length;
	if(q->tail==q->length)
		q->tail=1;
	else
		q->tail++;
}
int DEQUEUE(t_queue *q)
{
	int e=q->data[q->head];
	q->length=--q->length;
	if(q->head==q->tail)
		q->head=1;
	else
		q->head++;
	return e;
}
void PTINT_QUEUE(t_queue *q)
{
	for(int i=q->head;i<q->head+q->length;i++)
		printf("%d\n", q->data[i]);
}
int QUEUE_EMPTY(t_queue *q)
{
	if(q->length==0)
		return 1;
	return 0;
}
