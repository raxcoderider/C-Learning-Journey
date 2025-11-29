#include <stdio.h>
// code to find number of odd and even numbers in the array

int calcodd(int arr[], int n);
int calceven(int arr[], int n);

int calcodd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

int calceven(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arry[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("The total odd numbers in above array are : %d\n", calcodd(arry, 10));
    printf("The total even numbers in above  array are : %d\n", calceven(arry, 10));
    return 0;
}
