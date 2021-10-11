/* จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นรูปนาฬิกาทรายที่มีขนาดความสูงของกระเปาะแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3) */
/* 64010451 */
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number-> ");
    scanf("%d", &num);
    int size = 2 * num - 1;
    for (int x = 1; x <= size; x++)
    {
        for (int y = 1; y <= size; y++)
        {
            if ((y <= x || y <= 2 * num - x) && (y >= x || y >= 2 * num - x))
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