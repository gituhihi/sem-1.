#include <stdio.h>

void main() {
    int seconds, hours, minutes;

    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;      
    seconds %= 3600;
    minutes = seconds / 60;      
    seconds %= 60;

    printf("Time in HH:MM:SS format: %02d:%02d:%02d\n", hours, minutes, seconds);
}
