// Write a program to reverse the string.
#include <stdio.h>
int main()
{
    char str[100];
    int len = 0;
    printf("Enter a string :");
    scanf("%s", &str);
    for (int i = 0; str[i] != 0; i++)
    {
        len++;
    }
    for (int j = 0; j < len / 2; j++)
    {
        char temp = str[j];
        str[j] = str[len - j - 1];
        str[len - j - 1] = temp;
    }

    printf("The reverse of string is %s", str);

    return 0;
}