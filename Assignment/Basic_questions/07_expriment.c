// Write a program to print table of any number.
#include <stdio.h>
int main()
{
    int num;
    printf("You need to enter a number to print the table of that number\n");
    printf("Enter a number:");
    scanf("%d", &num);
    for (int i = 1; i <=10; i++)
    {
        printf("%d * %d = %d", num, i, num * i);
        printf("\n");
    }
    return 0;
}