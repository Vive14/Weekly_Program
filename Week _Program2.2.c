#include <stdio.h>
#include <limits.h>

int main()
{
    int max = INT_MIN; 
    int min = INT_MAX; 
    printf("Enter 3 number : ");
    for (int i = 0; i < 3; i++)
    {
        int num;
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
    }
    printf("Answer = %d", min + max);
    return 0;
}
