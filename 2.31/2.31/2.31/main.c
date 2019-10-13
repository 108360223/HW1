#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a, b;
int main()
{
	
	for (int i = 0; i < 10; i++)
	{
		a = pow(i, 2);
		b = pow(i, 3);
		printf("%d %d %d\n", i, a, b);
	}

	return 0;

}