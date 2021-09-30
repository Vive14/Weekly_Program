/* จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นปิระมิดที่มีความสูงเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3) */
/* 64010451 */
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number-> ");
    scanf("%d", &n);
    for (int y = 1; y <= n; y++)
    {
        for (int x = 1; x <= 2 * n - 1; x++)
        {
            if (x >= n - (y - 1) && x <= n + (y - 1))
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
