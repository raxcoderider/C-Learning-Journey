#include<stdio.h>

int main(){
    int marks[3];

    printf("Enter the Marks of Subject 1 :");
    scanf("%d",&marks[0]);
    printf("Enter the Marks of Subject 2 :");
    scanf("%d",&marks[1]);
    printf("Enter the Marks of Subject 3 :");
    scanf("%d",&marks[2]);
    printf("\n");

    printf("Result:\nSub 1 :%d\nSub 2 :%d\nSub 3 :%d\nTotal Marks:%d",marks[0],marks[1],marks[2],marks[0]+marks[1]+marks[2]);
    return 0;
}
