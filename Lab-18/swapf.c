#include<stdio.h>

void swap(int,int);

void main(){
	int a,b;
	scanf("%d %d", &a,&b);
	swap(a,b);
}
void swap(int x, int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("%d %d", x,y);
}
