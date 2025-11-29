// Write a program to enter the elements in a one-dimensional array
#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the element of Index(%d) =", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d index = %d\n", j, arr[j]);
    }
    return 0;
}