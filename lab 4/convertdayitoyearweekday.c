#include <stdio.h>

void main() {
    int days, years, weeks;

    
    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;        
    days %= 365;
    weeks = days / 7;           
    days %= 7;

    printf("Time in Years, Weeks, and Days format: %d years, %d weeks, %d days\n", years, weeks, days);
}
