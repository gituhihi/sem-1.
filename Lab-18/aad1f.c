#include<stdio.h>

int add(int x,int y);

void main(){
	int a,b,ans;
	scanf("%d %d",&a,&b);
	ans = add(a,b);
	printf("sum of two numbers is : %d",ans);
}

int add(int x,int y){
	return x+y;
}
