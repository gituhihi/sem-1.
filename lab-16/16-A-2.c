#include <stdio.h>
int main()
{
    int matrix[3][3];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int element = matrix[i][j];
            if (element > 0)
            {
                positiveCount++;
            }
            else if (element < 0)
            {
                negativeCount++;
            }
            else
            {
                zeroCount++;
            }
        }
    }
    printf("\nNumber of positive elements: %d\n", positiveCount);
    printf("Number of negative elements: %d\n", negativeCount);
    printf("Number of zero elements: %d\n", zeroCount);
}
