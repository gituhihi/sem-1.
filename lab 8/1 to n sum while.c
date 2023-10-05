#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("enter your number between 1 to n:-");
	scanf("%d",&n);
	while(i<=n)
	{
	    
		sum=sum+i;
	    i++;
    }
	
	printf("%d",sum); 
    
}
