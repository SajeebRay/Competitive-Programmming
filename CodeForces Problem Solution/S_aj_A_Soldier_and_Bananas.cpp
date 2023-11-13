#include<stdio.h>
#include<math.h>

int dollerNeed(int k, int n, int w)
{
	int i, total = 0;
	for (i = 1; i <= w; i++)
	{
		total += (k * i);
	}
	
	if (total <= n)
		return 0;
	else
		return (total - n);
}
int main()
{
	int k, n, w, amount;
	
	scanf("%d %d %d", &k, &n, &w);
	
	amount = dollerNeed(k, n, w);
	
	printf("%d\n", amount);
	
	return 0;
}
