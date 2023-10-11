#include<stdio.h>
void main()
{
	int i,n=1,x,y;
	printf("enter your base and power: ");
	scanf("%d %d",&x,&y);
	for (i=1;i<y;i++)
	{
		n=n*x;
		i++;
	}
	printf("%d",n);
}
