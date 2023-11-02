#include<stdio.h>

void maxmin(int x,int y);

void main(){
	int a,b;
	printf("enter first number : ");
	scanf("%d",&a);
	printf("enter second number : ");
	scanf("%d",&b);
	
}

void maxmin(int x,int y){
	if(x>=y){
		printf("%d is max and %d is min",x,y);
	}else{
		printf("%d is min and %d is max \n",x,y);
	}

}
