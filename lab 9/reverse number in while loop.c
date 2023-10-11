#include<stdio.h>
void main()
{
	int i=0,n,rem,count=0;
	printf("enter your number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
	    printf("%d",rem);
		n=n/10;	
    }
	printf("\n");
}
