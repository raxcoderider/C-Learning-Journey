#include <stdio.h>

int main() {
    int c;
    float f;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &c);
    f = (c * 9/5) + 32;
    printf("The temperature in Fahrenheit will be %f\n", f);
    return 0;  
}