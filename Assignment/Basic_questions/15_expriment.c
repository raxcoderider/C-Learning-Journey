//  Write a program using function to find the largest of three numbers.
#include <stdio.h>
int largest(int a, int b, int c);
int largest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int main()
{
    int a = 34, b = 67, c = 93;
    printf("%d", largest(a, b, c));
    return 0;
}