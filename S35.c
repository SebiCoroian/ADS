#include<stdlib.h>
#include<stdio.h>

int freq[10], n;

int OK(int num)
{
	int temp[]= {0,0,0,0,0,0,0,0,0,0};
	
	if(num%2!=0)
		return 0;

	while(num>0)
	{
		int c=num%10;
		temp[c]++;
		if(temp[c]>freq[c])
			return 0;
		num/=10;
	}
	return 1;
}

int main()
{
int aux=10;
scanf("%d",&n);
while(aux!=0)
{
	scanf("%d",&aux);
	freq[aux]++;
}
for(int i=1; i<=n; i++)
if(OK(i))
printf("%d ",i);
}
