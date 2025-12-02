// Write a program using function to sum the digits of a number.
#include <stdio.h>

int main()
{
    int num = 367;
    int count = 0;

    while (num != 0)
    {
        count++;
        num = num / 10;
    }

    printf("Number of digits: %d", count);
    return 0;
}
