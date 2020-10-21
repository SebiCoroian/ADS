#include<stdio.h>
#include<stdlib.h>

#define INF 0x3f3f3f3f

// typedef struct nod_lista
// {
// 	int cheie;
// 	struct nod_lista *next, *prev;

// }t_nod_lista;

// typedef struct 
// {
// 	t_nod_lista *head;

// }t_lista;

void HASH_INIT(int T[], int m);
int HASH_PRIM(int k, int m);
int HASH_PROBEF(int k, int i, int m);
int HASH_INSERT(int T[], int k, int m);
int HASH_SEARCH(int T[], int k, int m);
int HASH_DELETE(int T[], int k, int m);
void HASH_PRINT(int T[],int m);

void HASH_INIT(int T[], int m)
{
	for(int j=0;j<m;j++)
		T[j]=-INF;
}
int HASH_PRIM(int k, int m)
{
	return k%m;
}
int HASH_PROBEF(int k, int i, int m)
{
	return (HASH_PRIM(k,m)+i)%m;
}
int HASH_INSERT(int T[], int k, int m)
{
	int i=0;
	do
	{
		int j=HASH_PROBEF(k,i,m);
		if(T[j]==-INF)
		{	
			T[j]=k;
			return j;
		}
		else
			++i;

	}
	while(i!=m);
	return -1;
}
int HASH_SEARCH(int T[], int k, int m)
{
	int i=0, j;
	do
	{
		j=HASH_PROBEF(k,i,m);
		if(T[j]==k)
			return j;
		++i;
	}
	while(i!=m && T[j]!=-INF);
	return -1;
}
int HASH_DELETE(int T[], int k, int m)
{
	int j=HASH_SEARCH(T,k,m);
	if(j>-INF)
	{
		T[j]=-INF;
		return j;
	}
		else
			return -1;
}
void HASH_PRINT(int T[],int m)
{
	for(int j=j;j<m;j++)
		printf ("%d" , T[j]);
}