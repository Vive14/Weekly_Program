/*  จงเขียนโปรแกรมรับตัวอักษร 1 ชุด แล้วแสดงผลลัพธ์จากหลังมาหน้า (Level 3) */
#include <stdio.h>

int main()
{
	char str[50];
	char *p;
	p = str;
	printf("Input string : ");
	scanf("%s", str);
	printf("%s\n", str);
	while (*p != '\0') p++;
	 p--;
	while (p >= str)
	{
		printf("%c", *p);
		p--;
	}

	return 0;
}
