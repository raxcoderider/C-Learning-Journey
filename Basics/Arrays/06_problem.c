#include <stdio.h>
int main()
{

    int arry[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum=0;
    for (int i = 0; i < 9; i++)
    {
        sum = sum + arry[i];
    }
    printf("the sum of the arry is %d", sum);

    return 0;

}
