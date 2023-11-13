#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void spellingCheck(char str[], int n)
{
	char *main = "hello'\0'";
	
	int i, j = 0;
	for (i = 0; i < n; i++)
	{
		if (str[i] == main[j])
		{
			j++;
		}
	}
	
	if (j == 5)
		printf("YES\n");
	else 
		printf("NO\n");
}
int main()
{
	int l, i;
	char s[100];
	scanf("%s", s);
	
	l = strlen(s);
	
	spellingCheck(s, l);
	
	
	return 0;
}
