#include<stdio.h>
void main()
{
	int i,n;
	printf("enter your number between 1 to n:-");
	scanf("%d",&n);
	do
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	while(i<=n);
}
