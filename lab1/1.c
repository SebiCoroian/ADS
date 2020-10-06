#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

void LIST_INSERT(t_lista* L, t_nod_lista* X)
{
if(X!=NULL)
	return;
X->next=L->head->next;
if(L->head->next!=NULL)
L->head->next->prev=X;
L->head->next=X;
X->prev=L->head;
}

void LIST_MAKENULL(t_lista* L)
{
	L->head = (t_nod_lista*) malloc(sizeof(t_nod_lista));
	L->head->next=NULL;
	L->head->prev=NULL;
}
void LIST_PRINTLIST(t_lista* L)
{
t_nod_lista *x;
x=L->head->next;
if(x==NULL)
printf("lista e ok");
}

void LIST_DELETE(t_lista* L, t_nod_lista* X)
{
if(X->prev!=NULL)
	X->prev->next=X->next;
else
	L->head->next=X->next;
if(X->next!=NULL)
	X->next->prev = X->prev;
}

t_nod_lista LIST_LOCATE(t_lista* L, int KEY)
{
t_nod_lista *x;
x=L->head;
while(x!=NULL && x->key!=KEY)
	x=x->next;
return *x;
}


int main()
{

}