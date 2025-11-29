// 4.Write a program to calculate average of three numbers.
#include <stdio.h>

int main()
{
    float a, b, c, average;

    printf("Average of three numbers~\n");
    printf("Enter the first number:");
    scanf("%f", &a);
    printf("Enter the second number:");
    scanf("%f", &b);
    printf("Enter the third number:");
    scanf("%f", &c);
    printf("\n");

    average = (a + b + c) / 3;

    printf("Average=%.2f", average);

    return 0;
}