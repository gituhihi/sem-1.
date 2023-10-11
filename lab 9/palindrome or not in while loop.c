#include<stdio.h>
void main()
{
	int n,n1,i=1,rem,rn=0;
	printf("enter your number:");
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		rem=n%10;
		rn=(rn*10)+rem;
		printf("%d",rn);
		n=n/10;
	}
	printf("\n");
	if(rn==n1)
	{
		printf("this is palindrome number.");
	}
	else
	{
		printf("this is not palidrome number.");
	}
	
}
