#include<stdio.h>
int main()
{
	int a,y,b,c,D,x;
	printf("enter your a,b,c:-");
	scanf(" %d %d %d",&a,&b,&c);
	D=(b*b)-(4*a*c);
	if (D>0)
	{
		
	
	x= (-b+(sqrt(D)))/(2*a);
    y= (-b-(sqrt(D)))/(2*a);
	printf("your roots is %d,%d",x,y);
    }
    else
    {
    	printf("your root do not found because d <0");
	}
	
}


