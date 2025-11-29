#include <stdio.h>
int main()
{
    int age1 = 38;
    int age2 = 82;
    int *ptr1 = &age1;
    int *ptr2 = &age2;

    printf("The address of age1 and age2 is %u %u\n", ptr1, ptr2);
    printf("the subtraction of 2 address are %u", ptr1 - ptr2);
    return 0;
}