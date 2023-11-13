#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void findStone(char *str, int n)
{
	int i, count = 0; 
	for (i = 0; i < n-1; i++)
	{
		if (str[i] == str[i+1])
		{
			count++;
		}
	}
	
	printf("%d\n", count);
}
int main()
{
	int limit;
	char *str;
	scanf("%d", &limit);
	
	str = (char*)malloc(limit * sizeof(char));
	
	scanf("%s", str);
	
	findStone(str, limit);
	
	return 0;
}
