#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int ADD(int x, int y)//������ͺ���ADD
{
	int c = x + y;
	return c;
}
int main()
{
	int a = 0;
	int b = 0;//��������
	printf("������a,b��ֵ\n");
	scanf("%d %d", &a, &b);//����a,b��ֵ
	int sum = ADD(a, b);
	printf("a + b =%d\n", sum);//��ӡa��b�ĺ�
	return 0;
}