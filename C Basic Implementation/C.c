#include<stdio.h>

void  reverge(int arra[], int n, int m)
{
	if (m == n)
		return;
		
	else
	{
		reverge(arra, n, m+1);
		printf("%d ", arra[m]);
	}
}
int main()
{
	int arra[] = {1,2,3,4,5,6};
	
	reverge(arra, 6, 0); //6 is number of element
							// 0 is 1st index
}
