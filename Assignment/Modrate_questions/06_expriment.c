// Write a program to add 2 matrices.
#include <stdio.h>
int main()
{
    int arr1[2][3] = {{3, 5, 6}, {6, 2, 7}};
    int arr2[2][3] = {{6, 2, 6}, {8, 65, 2}};
    int sum;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum = arr1[i][j] + arr2[i][j];
            printf("%d\t", sum);
        }
        printf("\n");
    }
    return 0;
}