#include<stdio.h>
int main()
{
	int m;
	printf("enter your month:- ");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("total days is 31.");
		break;
		case 2:
		printf("total days is 28.");
		break;
		default:
		printf("total days is 30.");
		break;	
	}
}

