#include<stdio.h>
void main()
{
	int i=0,n,sum=0;
	printf("enter your positive number:");
	scanf("%d",&n);
	for (i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
