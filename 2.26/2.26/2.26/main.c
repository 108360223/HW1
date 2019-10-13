#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, y;
	scanf_s("%d", &x);
	scanf_s("%d", &y);

	if (x % y == 0)
	{
		printf("%d", x );
		printf("is a multipe");
		printf("%d",  y);
	}
	else
	{
		printf("%d", x);
		printf("is not a multipe");
		printf("%d", y);
	}
	
		return 0;
}