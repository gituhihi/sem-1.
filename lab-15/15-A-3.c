#include <stdio.h>
// #define MAX 5

int main()
{
    int arr[50] = {0};
    int i,n;
    int b=3;
    int count = 0;
    printf("Enter array elements:\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % b == 0)
            count++;
    }
    printf("Total elements divisible by %d is %d\n", b, count);
}