#include<stdio.h>
#include<stdlib.h>
int x,y;
int main()
{
	x = 5;
	y = 1;
	for (int i = 5; i > 0; i--)
	{
		for (int i = x; i > 0; i--)
		{
			printf(" ");
		}
		for (int i = 1; i<=y; i++)
		{
			printf("*");
		}
		printf("\n");
		x--;
		y=y+2;
	}
	return 0;
}