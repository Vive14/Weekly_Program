#include <stdio.h>

int main()
{
    int num;
    printf("Enter number -> ", num);
    scanf("%d", &num);
    for (size_t x = 1; x <= num; x++)
    {
        for (size_t y = 1; y <= num; y++)
        {
            if (x == y || x > y)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
