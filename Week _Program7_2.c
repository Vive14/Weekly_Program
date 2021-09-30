/* จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นปิระมิดที่มีความสูงเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3) */
/* 64010451 */
#include <stdio.h>
int main()
{
    int n, space, star, y;
    printf("Number of Pyramid : ");
    scanf("%d", &n);
    for (y = 1; y <= n; y++)
    {
        for (space = 1; space <= n - y; space++)
        {
            printf(" ");
        }
        for (star = 1; star <= (2 * y)-1; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
