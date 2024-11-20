#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int ADD(int x, int y)//创建求和函数ADD
{
	int c = x + y;
	return c;
}
int main()
{
	int a = 0;
	int b = 0;//创建变量
	printf("请输入a,b的值\n");
	scanf("%d %d", &a, &b);//输入a,b的值
	int sum = ADD(a, b);
	printf("a + b =%d\n", sum);//打印a，b的和
	return 0;
}