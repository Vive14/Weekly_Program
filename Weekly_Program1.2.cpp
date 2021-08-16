#include<stdio.h>

int main() {
    int max = -1000000000;
    for (int i = 0; i < 3; i++)
    {
        int num;
        scanf_s("%d", &num);
        if (num > max)
        {
            max = num;
        }
    }
    printf("%d", max);
    return 0;
}