#include <stdio.h>
void count(int arr[], int n);
void count(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
        
    }
}
int main()
{
    int a[] = {4, 6, 4, 2, 6, 3};
    int b;
    count(a, 6);
    return 0;
}