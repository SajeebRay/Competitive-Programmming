#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	gets(str);
	
	int l = strlen(str);
	int c1 = 0, c2 = 0;
	int i;
	
	for (i = 0; i < l; i++)
	{
		if ((str[i] <= 'z') && ('a' <= str[i]))
		{
			c1++;
		}
		else
		{
			c2++;
		}
	}
	if (c1 >= c2)
	{
		strlwr(str);
		printf("%s", str);
	}
	else
	{
		strupr(str);
		printf("%s", str);
	}
}	
