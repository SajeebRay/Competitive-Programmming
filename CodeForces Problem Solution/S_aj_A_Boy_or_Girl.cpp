#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void distrinct(char *str, int n)
{
	int i, j;
	char t; 
	for (i = 0; i < n-1; i++)
	{
		for (j = i+1; j < n; j++)
		{
			if (str[i] == str[j])
			{
				t = str[j];
				str[j] = str[n-1];
				str[n-1] = t;
				
				j--;
				n--;
			}
		}
	}
		
	if (n % 2 != 0)
		printf("IGNORE HIM!\n");
	else 
		printf("CHAT WITH HER!\n");
	
}
int main()
{
	int limit;
	char str[100];
	
	scanf("%s", str);
	limit = strlen(str);

	distrinct(str, limit);
	
	return 0;
}
