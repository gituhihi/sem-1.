#include<stdio.h>
void main()
{
	int i=1,n,evencount=0,oddcount=0;
	printf("enter your number:-");
	while(i<=10)
	{
		scanf("%d",&n);
		if(i%2==0)
		{
			evencount++;
		}
		else
		{
			oddcount++;
		}
	i++;
	}
	
	printf("%d",evencount);
	printf("\n%d",oddcount);
}	
