#include <stdio.h>
void square(int num, int x, int y)
{
    if (x != num)
    {
        if (y != num)
        {
            printf("*");
            square(num, x, y + 1);
        }
        else
        {
            y = 0;
            printf("\n");
            square(num, x + 1, y);
        }
    }
}
int main()
{
    int num;
    int x = 0;
    int y = 0;
    printf("Enter Number -> ");
    scanf("%d", &num);
    square(num, x, y);
    return 0;
}
