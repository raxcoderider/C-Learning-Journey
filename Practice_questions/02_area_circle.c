/*Calculate the area of a circle*/

#include <stdio.h>

int main(){
    float pi = 3.14;
    int radius = 7;
    int hight = 10;
    printf("area of the circe if radius is %d will be %f\n", radius, pi*(radius*radius));
    printf("Volume of the cylinder if radius is %d and hight is %d will be %f", radius, hight, pi*(radius*radius)*hight);
    return 0;
}
