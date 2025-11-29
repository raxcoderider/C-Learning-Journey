// Write a program to enter the marks of 50 students and calculate the average.
#include <stdio.h>
int main()
{
    int std_marks[50];
    float sum = 0, average;
    for (int i = 0; i < 50; i++)
    {
        printf("Enter the Marks for Index(%d) | Student(%d) =", i, i + 1);
        scanf("%d", &std_marks[i]);
        sum = sum + std_marks[i];
    }
    average = sum / 50;
    printf("Average = %.2f", average);
    return 0;
}