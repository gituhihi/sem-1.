#include <stdio.h>46
void main()
{
	int number,sum=0,i=1;
	printf("enter your number:");
	scanf("%d",&number);
	for(i=1;i<number;i++)
	{
		if(number%i==0)
		{
			sum+=i;
		}
}
	if(sum==number)
	{
		printf("%d is a perfect number",number);
	}
	else
	{
		printf("%d is not perfect number",number);
	}
}
