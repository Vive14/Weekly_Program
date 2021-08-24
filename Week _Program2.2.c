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
        if (num < min)
        {
            min = num; 
        }
        else if (num > max)
        {
            max = num; 
        }
    }
    printf("Answer = %d", max + min);
    return 0;
}
