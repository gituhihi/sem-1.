#include <stdio.h>
int main()
{
    int students = 20;
    int roll_marks[students][2];
    for (int i = 0; i < students; i++)
    {
        printf("Enter Roll Number for Student %d: ", i + 1);
        scanf("%d", &roll_marks[i][0]);
        printf("Enter Marks for Student %d: ", i + 1);
        scanf("%d", &roll_marks[i][1]);
    }
    printf("\nStudent Information:\n");
    for (int i = 0; i < students; i++)
    {
        printf("Student %d: Roll Number %d, Marks %d\n", i + 1, roll_marks[i][0], roll_marks[i][1]);
    }
}
