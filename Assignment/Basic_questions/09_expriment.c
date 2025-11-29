// Write a program to find the sum and average of five numbers
#include <stdio.h>
int main()
{
    float num[] = {34, 53, 62, 62, 35};
    float sum = 0, average;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + num[i];
    }
    printf("The sum of all 5 numbers =%.2f\n", sum);
    average = sum / 5;
    printf("The average of all 5 numbers =%.2f\n", average);
    return 0;
}