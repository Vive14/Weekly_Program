/*  จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3) */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Input string: ");
    scanf("%s", str);
    printf("Output string: %s ", strrev(str));
    return 0;
}