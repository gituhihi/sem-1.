#include<stdio.h>
void main()
{
	int x,y,sum,n;
	printf("enter your number:-");
	scanf("%d",&n);
     x=n%10;                                
	while(n>=10)
	{
		n/=10;
	}
	y=n;
	sum=x+y;
	printf("first and last digit sum is  %d",sum);
}

