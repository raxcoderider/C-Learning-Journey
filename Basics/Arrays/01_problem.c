#include <stdio.h>

int main()
{
    int a = 34;
    int *ptr = &a;
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The address of a is %u\n", ptr);
    ptr--;
    printf("The address of a is %u\n\n", ptr);

    float b = 83.23;
    float *ptr1 = &b;
    printf("The address of a is %u\n", ptr1);
    ptr1++;
    printf("The address of a is %u\n", ptr1);
    ptr1--;
    printf("The address of a is %u\n\n", ptr1);

    char c = 'A';
    char *ptr3 = &c;
    printf("The address of a is %u\n", ptr3);
    ptr3++;
    printf("The address of a is %u\n", ptr3);
    ptr3--;
    printf("The address of a is %u\n\n", ptr3);
    return 0;
}