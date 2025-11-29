// 05. Write a program to illustrate mixed data types.
#include <stdio.h>

int main()
{
    int age;
    float height;
    char grade;
    double salary;

    printf("Enter your age (int): ");
    scanf("%d", &age);

    printf("Enter your height in meters (float): ");
    scanf("%f", &height);

    printf("Enter your grade (char): ");
    scanf(" %c", &grade);

    printf("Enter your salary (double): ");
    scanf("%lf", &salary);

    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);
    printf("Salary: %.2lf\n", salary);

    return 0;
}
