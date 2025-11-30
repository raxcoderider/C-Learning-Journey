// Write a program to calculate area and circumference of circle.
#include <stdio.h>

void input(float *radius);
float circum(float radius);
float area(float radius);

int main()
{
    int choose;
    float r;
    printf("~~Program to calculate area and circumference of circle~~\n");
    printf("Choose the following which one you wanted to use\n");
    printf("(1) Calculate the area of circle\n");
    printf("(2) Calculate the circumference of circle\n");
    printf("(3) Calculate the area and circumference of circle\n");
    printf("ENTER: 1 , 2 or 3\n");
    printf("Enter:");
    scanf("%d", &choose);

    switch (choose)
    {
    case 1:
        input(&r);
        printf("The circumference of circle :%.2f\n", circum(r));
        break;
    case 2:
        input(&r);
        printf("The area of circle :%.2f\n", area(r));
        break;

    case 3:
        input(&r);
        printf("The circumference of circle :%.2f\n", circum(r));
        printf("The area of circle :%.2f\n", area(r));
        break;

    default:
        printf("404 Error : Entered in correct number");
        break;
    }
    return 0;
}
void input(float* radius)
{
    printf("Enter the radius of the circle:");
    scanf("%f", radius);
}

float circum(float radius)
{
    float pai = 3.14;
    float circum;
    circum = (2 * pai * radius);
    return circum;
}
float area(float radius)
{
    float pai = 3.14;
    float area;
    area = pai * (radius * radius);
    return area;
}