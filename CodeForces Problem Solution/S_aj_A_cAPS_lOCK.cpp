#include<stdio.h>
#include<string.h>

int main()
{
	char s[100];
	int n;
	scanf("%s", s);
	
	n = strlen(s);

	int i, c = 0;
	for (i = 1; i < n; i++)
	{
		if ((s[i] <= 'Z') && (s[i] >= 'A'))
		{
			c++;
		}
	}
	if (c == n-1)
	{
		if ((s[0] <= 'Z') && (s[0] >= 'A')){
		
			for (i = 0; i < n; i++)
			{
					s[i] = 97 + (s[i] - 65);
			}		
		}
		else
		{
			s[0] = 65 + (s[0] - 97);
			for (i = 1; i < n; i++)
			{
					s[i] = 97 + (s[i] - 65);
			}	
		}
		printf("%s\n", s);		
	}
	else
	{
		printf("%s\n", s);
	}
	
}
