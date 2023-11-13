#include<stdio.h>
#include<math.h>

void lucky_number(int n)
{
	if ((n % 4 == 0) || (n % 7 == 0))
		printf("YES\n");
	else if (//(n == 44 || n == 444) ||
			//	(n == 77 || n == 777) ||
			//	(n == 47 || n == 477 || n == 474 || n == 447) ||
				(n == 4 || n == 744 || n == 44 // || n == 774)
				)
		printf("YES\n");
	else
		printf("NO\n");
}
int main()
{
	int n;
	scanf("%d", &n);
	
	lucky_number(n);
	
	return 0;
}
