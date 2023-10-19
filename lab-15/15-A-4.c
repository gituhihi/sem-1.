#include <stdio.h>
int main()
{
    int arr[10], i, n, element;
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &element);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            printf("%d found at position %d", element, i + 1);
        }
    }
    printf("Element  not  found");
}