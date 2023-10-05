#include<stdio.h>
void main()
{
	int n,i=2,flag=0;
	printf("enter your number:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			flag=1;
		}
		i++;
    }
	   
	   	if(flag==0)
		{
			printf("no is prime.");
		}
		else
		{
			printf("it is not prime.");
		}
   
}

