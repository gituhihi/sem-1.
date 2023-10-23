#include <stdio.h>

void main()
{
    char ch, *chp;
    int i, *ip;
    float ff, *flo;
    printf("Enter character: ");
    scanf("%c", &ch);
    printf("\nEnter integer: ");
    scanf("%d", &i);
    printf("\nEnter float: ");
    scanf("%f", &ff);
    chp = &ch;
    ip = &i;
    flo = &ff;
    printf("\nAddress contained in chp: %u", chp);
    printf("\nAddress contained in ip: %u", ip);
    printf("\nAddress contained in flo: %u", flo);
    printf("\nValue of ch using chp pointer: %c", *chp);
    printf("\nValue of i using ip pointer: %d", *ip);
    printf("\nValue of ff using flo pointer: %f", *flo);
}