#include<stdio.h>
void main()
{
	int x,y,sum,no;
	printf("enter your number:- ");
	scanf("%d %d",&x,&y);
	printf("1)addition:-\n2)subtraction:-\n3)multiplication:-\n4)divided:-");
	scanf("%d",&no);
	switch(no)
	{
	case 1:
		sum=x+y;
		printf("addition is %d",sum);
		break;
	case 2:
		sum=x-y;
		printf("subtraction is %d",sum);
		break;
	case 3:
		sum=x*y;
		printf("multiplication is %d",sum);
		break;
	case 4:
		sum=x/y;
		printf("divided is %d",sum);
		break;
	default:
		printf("invalid");
		break;
    }
    
	
}
