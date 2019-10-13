#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x;
	scanf_s("%d", &x);
	if (x % 2 == 0)
	{
		printf("it is even");
	}
	else
	{
		printf("it is odd");
	}
	return 0;
}