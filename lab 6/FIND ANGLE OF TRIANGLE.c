
#include<stdio.h>
void main(){
	float a,b,c;
	printf("ENTER A VALUE:-");
	scanf("%f %f %f",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("TRIANGLE IS A EQUILATERAL");
	}
	
	else if(a==b || b==c || a==c)
	{
		printf("TRIANGLE IS AN ISOSCELES");
	}
	
	else {
	printf("TRIANGLE IS A SCALENE\n"); 
}
	if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
	{
		printf("TRIANGLE IS RIGHT ANGLE");
		
	}
}
