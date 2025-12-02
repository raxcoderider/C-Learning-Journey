// Write a program to calculate factorial of a number using recursive function.
#include <stdio.h>
int factorial(int);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, factorial(num));
    return 0;
}
int factorial(int a)
{
    int fact = 1;
    for (int i = a; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}