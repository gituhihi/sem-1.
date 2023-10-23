#include<stdio.h>

int main()
{
    int swep;
    int a,b,temp;
    int *n;
    int *fir;
    int *sec;
    printf("Enter Your number:");
    scanf("%d %d", &a , &b);
    printf("\nBefore swapping a = %d and b = %d", a, b);
    fir=&a;
    sec=&b;
    temp=*fir;
    *fir=*sec;
    *sec=temp;
    printf("\nsweap b:%d a:%d",b,a);
}