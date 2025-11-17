#include <stdio.h>

int main()
{
    int a;
    float b;
    float sum;

    printf("Sum between int and float numbers \n");

    printf("Please enter a decimal number :");
    scanf("%d", &a);

    printf("Please enter a real number :");
    scanf("%f", &b);

    sum = a + b;
    printf("The sum of a and b is %f", sum);

    return 0;
}