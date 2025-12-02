// Write a program using function to swap two numbers using call by reference.
#include <stdio.h>
void swap(int *a, int *b);

int main()
{
    int num1, num2;
    num1 = 23;
    num2 = 86;
    printf("num1=%d & num2=%d\n", num1, num2);
    printf("After swap\n");
    swap(&num1, &num2);
    printf("num1=%d & num2=%d\n", num1, num2);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}