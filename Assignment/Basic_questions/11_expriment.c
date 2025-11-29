// Write a program to calculate the length of string.
#include <stdio.h>
int main()
{
    char name[100];
    int count;
    printf("Enter your Full name =");
    scanf("%s", name);
    printf("%s\n", name);
    for (int i = 0; name[i] != '\0'; i++)
    {
        count = i + 1;
    }
    printf("THe length of string = %d", count);

    return 0;
}
