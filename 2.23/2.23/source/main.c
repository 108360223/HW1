#include<stdio.h>
#include<stdlib.h>
int x, y, z,max,min;
int main()
{
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);
	if (x >= y)
	{
	max = x;
	}
	else
	{
	max = y;
	}
	if (max >= z)
	{
	max = max;
	}
	else
	{
	max = z;
	}

	if (x <= y)
	{
	min = x;
	}
	else
	{
	min = y;
	}
	if (min <= z)
	{
	min = min;
	}
	else
	{
	min = z;
	}
	printf("largest  is %d\n",max);
	printf("smallest is %d\n",min);
}