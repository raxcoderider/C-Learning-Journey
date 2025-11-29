#include <stdio.h>
int main()
{
    int a[3][3] = {{3, 5, 8}, {6, 4, 3}, {6, 0, 2}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",a[i][j]);
            
        }
        printf("\n\n");
        
    }
    return 0;
    
}