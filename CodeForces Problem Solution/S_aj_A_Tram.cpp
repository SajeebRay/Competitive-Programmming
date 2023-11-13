#include<stdio.h>

int seatAvailabe(int total, int out, int in)
{
	total = total - out;
	total = total + in;
	
	return total;
}
int main()
{
	int n, i;
	scanf("%d", &n);
	
	int a, b, total = 0, max = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		
		total = seatAvailabe(total, a, b);
		
		if (total > max)
		{
			max = total;
		}
	}
	printf("%d\n", max);
	return 0;
}
