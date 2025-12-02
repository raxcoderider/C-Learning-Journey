// Write a program to add digits of a four-digit number.
#include <stdio.h>

int main()
{
    int num = 8372;
    int sum = 0;
    int digit;

    while (num != 0)
    {
        digit = num % 10; 
        sum = sum + digit; 
        num = num / 10;   
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
