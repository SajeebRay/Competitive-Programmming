#include<stdio.h>

int main()
{
	int a, b, count = 0;
	
	scanf("%d %d", &a, &b);
	
	if (a == b)
	{
		count = 1; 
	}
	else
	{
		while (a <= b)
		{
			a *= 3;
			b *= 2;
			count++;
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}
