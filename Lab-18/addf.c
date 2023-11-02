#include<stdio.h>

void add(int x,int y);

void main(){
	int a,b;
	scanf("%d %d",&a,&b);
	add(a,b);
}

void add(int x,int y){
	printf("sum of two numbers is : %d", x+y);
}
