// Write a C program to calculate area of a rectangle

#include <stdio.h>

int main()
{
    int length, breath;
    printf("input the length : ");
    scanf("%d", &length);
    printf("input the breath : ");
    scanf("%d", &breath);

    printf("The area of rectangle will be %d", length * breath);
    return 0;
}
