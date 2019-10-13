#include<stdio.h>
#include<stdlib.h>
float a, w, x, y, z,distance,money,total;
int main()
{
	printf("一整天的總里程數");
	scanf_s("%f", &a);
	printf("汽油一公升多少錢");
	scanf_s("%f", &w);
	printf("平均一公升能行駛多少公里");
	scanf_s("%f", &x);
	printf("一天的停車費");
	scanf_s("%f", &y);
	printf("一天的通行費(過路費)");
	scanf_s("%f", &z);
	distance = a / x;
	money = distance * w;
	total = money + y + z;
	printf("一天的花費共%f", total);
	return 0;
}