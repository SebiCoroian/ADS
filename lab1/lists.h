#include<stdlib.h>

typedef struct NOD_LISTA
{
	int key;
	struct NOD_LISTA *next, *prev;
}t_nod_lista;

typedef struct 
{
	t_nod_lista *head;

}t_lista;

void LIST_INSERT(t_lista* L, t_nod_lista* X);
t_nod_lista LIST_LOCATE(t_lista* L, int KEY);
void LIST_RETRIEVE();
void LIST_DELETE(t_lista* L, t_nod_lista* X);
void LIST_NEXT();
void LIST_PREV();
void LIST_MAKENULL(t_lista* L);
void LIST_FIRST();
void LIST_PRINTLIST(t_lista* L);
