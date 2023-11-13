#include<stdio.h>

int main()
{
	unsigned long long int n, k, i;
	scanf("%llu %llu", &n, &k);
	unsigned long long int count = 0;
	
	for (i = 1; i <= n; i = i+2)
	{
		count++;
		if (count ==  k)
		{
			printf("%llu", i);
			exit(0);
		}
	}
	for (i = 2; i <= n; i = i+2)
	{
		count++;
		if (count ==  k)
		{
			printf("%llu", i);
			exit(0);
		}
	}
}
