#include<stdio.h>

float max(int,int,int);

void main(){
	int a,b,c;
	float r;
	printf("enter first number : ");
	scanf("%d",&a);
	printf("enter second number : ");
	scanf("%d",&b);
	printf("enter third number : ");
	scanf("%d",&c);
	r=max(a,b,c);
	printf("max from three numbers is : %f",r);
}

float max(int x,int y,int z){
	if(x>y){
		if(x>z){
			return x;
		}else{
			return z;
		}
	}
	else{
		if(y>z){
			return y; 
		}else{
			return z;
		}
	}
}
