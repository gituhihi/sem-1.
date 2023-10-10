#include <stdio.h>
int main() 
{
    int n, digitCount = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n == 0) {
        digitCount = 1; 
    } else {
        while (n != 0) {
            n /= 10; 
            digitCount++;
        }
    }
    printf("Number of digits: %d\n", digitCount);
}

