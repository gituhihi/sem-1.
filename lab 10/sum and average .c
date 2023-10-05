#include<stdio.h>
void main()
{
	int i=1,n=0,n1 ,sum,avg;
	printf("enter your number:-");
	while(1)
	{
		scanf("%d",&n1);
		if(n1==0)
	{
	break;
	}
	sum+=n1;
	n++;
	}
		printf("%d",sum-1);
		avg=sum/n;
		printf("\n%d",avg);
	
	
	
}
