#include<stdio.h>
#include<stdlib.h>
float a, w, x, y, z,distance,money,total;
int main()
{
	printf("�@��Ѫ��`���{��");
	scanf_s("%f", &a);
	printf("�T�o�@���ɦh�ֿ�");
	scanf_s("%f", &w);
	printf("�����@���ɯ��p�h�֤���");
	scanf_s("%f", &x);
	printf("�@�Ѫ������O");
	scanf_s("%f", &y);
	printf("�@�Ѫ��q��O(�L���O)");
	scanf_s("%f", &z);
	distance = a / x;
	money = distance * w;
	total = money + y + z;
	printf("�@�Ѫ���O�@%f", total);
	return 0;
}