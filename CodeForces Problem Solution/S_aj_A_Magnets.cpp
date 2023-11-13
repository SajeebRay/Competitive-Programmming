#include<stdio.h>
int main()
{
	int n, c, number, temp;
	scanf("%d", &n);
	int i;
	c = temp = 0;
	for (i = 0 ; i < n; i++)
	{
		scanf("%d", &number);
		if (temp != number)
		{
			c++;
		}
		temp = number;
	}
	printf("%d", c);
	
	return 0;
}
