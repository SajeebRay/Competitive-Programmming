#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	char *s;
	s = (char*)malloc(n * sizeof(char));
	
	scanf("%s", s);
	
	int i, x = 0, y = 0;
	
	for (i = 0; i < n; i++)
	{
		if (s[i] == 'A')
		{
			x++;
		}
		else
		{
			y++;
		}
	}
	if (x > y)
	{
		printf("Anton\n");
	}
	else if (x == y)
	{
		printf("Friendship\n");
	}
	else
	{
		printf("Danik\n");
	}
	
	return 0;}
