#include<stdio.h>
void main(){
	int m1,m2,m3,m4,m5;
	printf("ENTER A VALUE");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	float a;
	a=(m1+m2+m3+m4+m5)/5.0;
	if(a<35)
	{
		printf("fail");
	}
	else if(a>35 && a<45)
	{
		printf("pass");
		}
	else if(a>45 && a<60)
	{
		printf("second class");
	}
	else if(a>60 && a>70)
	{
		printf("first class");
	}
	else
	   printf("dist");
	}
