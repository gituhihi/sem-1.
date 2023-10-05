#include<stdio.h>
void main(){
	int a,b;
	printf("ENTER A NUMBER\n");
	scanf("%d",&a);
	b=a%10;
	if(b&1==1)
	{
		printf(" NUMBER IS ODD");
	}
	else 
	printf(" NUMBER IS EVEN");
}
