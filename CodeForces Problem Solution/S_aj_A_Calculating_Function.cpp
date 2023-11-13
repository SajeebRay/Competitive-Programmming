#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long int i, n;
	scanf("%llu", &n);
	 long long int sum = 0;
	
	for (i = 1; i <= n; i++)
	{
		sum = sum + (i * pow(-1, i));
	}
	printf("%lld", sum);
	
	return 0;
}
