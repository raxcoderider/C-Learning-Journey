#include<stdio.h>

int main(){
    int mularr[2][2]={{2,6},{3,3}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d",mularr[i][j]);
        }
        printf("\n");
    }
    return 0;
}