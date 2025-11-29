// Write a program to find factorial of a number.

#include <stdio.h>
int main()
{
    int num, factorial=1;
    printf("Factorial of a number -\n");
    printf("Enter a number:");
    scanf("%d", &num);

    for (int i = num; i >=1; i--)
    {
        factorial = factorial * i;
    }
    printf("%d", factorial);
    return 0;
}