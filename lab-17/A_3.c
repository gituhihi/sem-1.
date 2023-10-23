#include<stdio.h>

int main()
{
    int sum;
    int a,b;
    int *n;
    printf("Enter Your number:");
    scanf("%d %d", &a , &b);
    sum=a+b;
    n=&sum;
    printf("%d %d",n,*n);
}