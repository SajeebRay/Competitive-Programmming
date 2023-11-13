#include<stdio.h>
int main()
{
	int n, i; 
	scanf("%d", &n);
	if (n == 1)
	{
		printf("I hate it");
	}
	else
	{
		i = 0;
		while(1)
		{
			printf("I hate ");
			i++;
			if (i == n)
			{
				printf("it");
				break;
			}
			printf("that I love ");
			i++;
			if (i == n)
			{
				printf("it");
				break;
			}
			printf("that ");
		}
	}
}
