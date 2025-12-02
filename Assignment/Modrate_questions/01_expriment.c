// Write a program to swap two numbers
#include <stdio.h>
void swap(int*, int*);
void print(int, int);
void input(int*, int*);

int main()
{
    int t, y;
    input(&t,&y);
    print(t, y);
    swap(&t, &y);
    print(t, y);
    return 0;
}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void print(int a, int b)
{
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}
void input(int* a, int* b)
{
    printf("Enter the Value of a :");
    scanf("%d", a);
    printf("Enter the Value of b :");
    scanf("%d", b);
}