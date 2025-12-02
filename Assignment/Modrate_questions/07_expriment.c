// Write a program to count the numbers of characters in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    scanf("%s",str);

    printf("Number of characters: %d\n", strlen(str));

    return 0;
}
