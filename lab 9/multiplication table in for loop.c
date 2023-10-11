#include<stdio.h>
void main()
{
	int i=1,n,mul;
	printf("enter your table number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		mul=n*i;
	printf("%d*%d=%d\n",n,i,mul);
}
}
