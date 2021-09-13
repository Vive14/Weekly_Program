/* จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นรูปผีเสื้อที่มีขนาดของปีกแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3) */
#include <stdio.h>

int main()
{
    int num;
    printf("Enter Number-> ");
    scanf("%d", &num);
    int size = 2 * num - 1;
    for (int x = 1; x <= size; x++)
    {
        for (int y = 1; y <= size; y++)
        {
            if ((y <= x && y <= 2 * num - x) || (y >= x && y >= 2 * num - x))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            //printf("(%d,%d)", x,y);
        }
        printf("\n");
    }

    return 0;
}