/* จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นรูปนาฬิกาทรายที่มีขนาดความสูงของกระเปาะแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3) */
/* 64010451 */
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
            if ((y == x) || (y > x && y + x <= size))
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
    for (int y = 1; y <= num; y++)
    {
        for (int x = 1; x <= 2 * num - 1; x++)
        {
            if (x >= num - (y - 1) && x <= num + (y - 1))
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
