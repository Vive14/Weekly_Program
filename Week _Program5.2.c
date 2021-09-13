/* จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นรูปผีเสื้อที่มีขนาดของปีกแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3) */
#include <stdio.h>

int main()
{
    int num;
    printf("Enter Number-> ");
    scanf("%d", &num);
    int size = 2 * num;
    for (size_t x = 1; x < num; x++)
    {
        for (size_t y = 1; y < size; y++)
        {
            if ((y <= x) || (y > x && y + x >= size))
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
    for (size_t x = 1; x < size; x++)
    {
        printf("*");
    }
    printf("\n");
    for (size_t x = num + 1; x < size; x++)
    {
        for (size_t y = 1; y < size; y++)
        {
            if ((y + x <= size) || (y == x) || (y > x))
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
