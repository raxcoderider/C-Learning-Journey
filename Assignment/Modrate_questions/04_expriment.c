// Write a program to find greatest of two numbers.
#include <stdio.h>
int greatest(int a, int b);
int greatest(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
        return b;
}
int main()
{
    int a, b;
    a = 345;
    b = 934;
    printf("The greatest of the 2 number is %d\n", greatest(a, b));
    return 0;
}