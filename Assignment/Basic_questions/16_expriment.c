// Write a program using function to swap two numbers using call by value
#include <stdio.h>
void swap(int a, int b);
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d and %d",a,b);
}
int main()
{
    swap(4,7);
    return 0;
}