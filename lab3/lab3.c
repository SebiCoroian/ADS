#include "hash_tables.h"

int main()
{
	int T[10000],m,k,j;
	printf("insert hash table size\n");
	scanf("%d", &m);
	HASH_INIT(T,m);
	printf("input numbers untill the reach of 0:");
	scanf("%d", &k);
	while(k)
	{
		j=HASH_INSERT(T,k,m);
		printf("The given key is available at %d\n",j );
		scanf("%d", &k);
	}
	HASH_PRINT(T,m);
	printf("Searching key:\n");
	scanf("%d",&k);
	j=HASH_SEARCH(T,k,m);
	if(j!=-INF)
	printf("key found\n");
	else
	printf("key not found\n");
	printf("deleting key:");
	scanf("%d", &k);
	j=HASH_DELETE(T,k,m);
	if(j!=-INF)
	{
		printf("key deleted at %d \n",j);
		HASH_PRINT(T,m);
	}
	else
		printf("key hasn't been deleted\n");
}