// Write a program without using predefined functions to check whether the string is palindrome or not.
#include <stdio.h>
int main()
{
    char str[100];
    char org[100];
    int palindrome = 0;
    int len = 0;

    printf("Enter a string :");
    scanf("%s", &str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        org[i] = str[i];
        len++;
    }
    org[len] = '\0';
    for (int j = 0; j < len / 2; j++)
    {
        char temp = str[j];
        str[j] = str[len - j - 1];
        str[len - j - 1] = temp;
        if (org[j] == str[j])
        {
            palindrome++;
        }
    }
    printf("%d\n",len);
    printf("%d\n",palindrome);

    if (palindrome==len/2)
    {
       printf("This is palindrome");
    }
    else
    printf("This not palindrome");

    return 0;
}