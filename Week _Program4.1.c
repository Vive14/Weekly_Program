#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number -> ");
    scanf("%d", &n);
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= n; y++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
