#include<stdio.h>
#include<string.h>

int main()
{
    char saj[100];
	scanf("%s", saj);
	int l = strlen(saj);
	int i, count = 0;
	
	for (i = 0; i < l; i++)
	{
		if (saj[i] == saj[i+1])
		{
			count++;
			if (count == 6)
			{
				printf("YES\n");
				exit(0);
			}
		}
		else
		{
			count = 0;
		}
	}
	printf("NO\n");

    return 0;
}

