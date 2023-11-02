#include<stdio.h>

void func(int,int);

void main(){
	int a,b;
	scanf("%d %d",&a,&b);
	func(a,b);
	printf("modified value of a is %d and b is %d",a,b);
}

void func(int x,int y){
	printf("modified value of a is %d and b is %d \n",x+1,y+1);
}
