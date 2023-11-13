#include <stdio.h>
#include <string.h>

void print(int arra[], int l)
{
	int i;
	for (i = 0; i < l; i++)
	{
		printf("%d ", arra[i]);
	}
	printf("\n");
}
int main()
{	
	int n;
	scanf("%d", &n);
	
	int arra[100], i;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arra[i]);
	}
	
	int copy = arra[n-1];
	
	int flag = 0;
	for (i = n-1; i >= 0; i--)
	{
		if (copy < arra[i-1])
		{
			arra[i] = arra[i-1];
			print(arra, n);

		}
		else
		{
			arra[i] = copy;
			print(arra, n);
			flag = 1;
		}
		
		if (flag == 1)
			break;
	}
	
	return 0;
}
