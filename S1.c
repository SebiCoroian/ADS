#include <stdio.h>
#include <stdlib.h>

struct node {
	int payload;
	struct node* link;
}*start;


void CLL_insert(int n);
void CLL_delete(struct node* x);

int main()
{
	int n,m;
	start=NULL;

	scanf("%d,%d", &n, &m);
	CLL_insert(n);
	while(start->link!=start)
	{
		for(int i=1;i<m;i++)
			start=start->link;
		int tmp=start->link->payload;
		printf("%d ", tmp);
		CLL_delete(start);
	}

}

void CLL_insert(int n)
{
	int i=1;
	struct node *preptr, *newnode;
	start = (struct node *)malloc(sizeof(struct node));
	start->payload=i;
	start->link=NULL;
	preptr=start;
	for(int i=2;i<=n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		newnode->payload=i;
		newnode->link=NULL;
		preptr->link=newnode;
		preptr=newnode;
	}
	preptr->link=start;
}
void CLL_delete(struct node* x)
{
	struct node *temp = x->link;
	x->link=temp->link;
	free(temp);
}
