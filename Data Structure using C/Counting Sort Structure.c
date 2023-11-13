#include<stdio.h>
#include<math.h>
#include<string.h>
int findMax(int arra[], int l);
void countingSort(int arra[], int l, int k);
void print(int arra[], int k);

int main()
{
	int arra[] = {2,4,3,4,9,7,3,4,0,3,2,5,6,7,0};
	int l = 15;
	int max = findMax(arra, l);
	
	countingSort(arra, l, max);
	print(arra, l);
	
}
void countingSort(int arra[], int l, int k)
{
	int count[100] = {0};
	int bArra[l+1];
	int i, j;
	
	for (i = 0; i < l; i++)
	{
		++count[arra[i]];
	}
	print(count, k+1);
	for (i = 1; i <= k; i++)
	{
		count[i] = count[i] + count[i-1];
	}
	for (i = l-1; i >= 0;i--)
	{
		bArra[--count[arra[i]]] = arra[i];
	}
	for (i = 0; i < l; i++)
	{
		arra[i] = bArra[i];
	}
	arra[l] = '\0';
}
int findMax(int arra[], int l)
{
	int max = 0;
	
	for (int i = 0; i < l; i++)
	{
		if (arra[i] > max)
		{
			int t = max; 
			max = arra[i];
			arra[i] = t;
		}
	}
	return max;
}
void print(int arra[], int l)
{
	for (int i = 0; i < l; i++)
	{
		printf("%d ", arra[i]);
	}
}
