#include<stdio.h>

int main () 
{
    int num;
    printf("Enter Number -> ",num);
    scanf("%d", &num);
    for (int x = 0; x < num; x++)
    {
        for (int y = 0; y < x+1; y++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
