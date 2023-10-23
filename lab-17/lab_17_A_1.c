#include<stdio.h>

int main()
{
    int n;
    int *i;
    scanf("%d",&n);
    i=&n;
    printf("%d-%d ",i,*i);
}