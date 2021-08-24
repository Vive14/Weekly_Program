#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int max, min;
    printf("Enter 3 number : ");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
    { //max
        max = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        max = num2;
    }
    else if (num3 >= num1 && num3 >= num2)
    {
        max = num3;
    } //min
    if (num1 <= num2 && num1 <= num3)
    {
        min = num1;
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        min = num2;
    }
    else if (num3 <= num1 && num3 <= num2)
    {
        min = num3;
    }
    printf("Answer = %d", max + min);
    return 0;
}
