#include<stdio.h>
void main()
{
	int i,x,y;
	printf("enter your two number:-");
	scanf("%d%d",&x,&y);
	while(x<=y)
	{
		if(x%2==0)
		{
		   printf("%d\n",x);
		}
		x++;
		
	}
	
}
