#include<stdio.h>
void main(){
	int a,b,add,sub,mul,choice;
	float div;
	printf("ENTER A VALUE");
	scanf("%d %d",&a,&b);
	printf("ENTER THE CHOICE OF OPRATER");
	printf("1.add,2.sub,3.mul,4.div");
	scanf("%d",&choice);
	if(choice==1)
	{
		add=a+b;
		printf("%d",add);
	}
	else if(choice==2)
	{
		sub=a-b;
		printf("%d",sub);
	}
	else if(choice==3)
	{
		mul=a*b;
		printf("%d",mul);
	}
	else if (choice==4)
	{
		div=a/b;
		printf("%d",div);
	}
	else 
	printf("enter a valid value");	
}
		
