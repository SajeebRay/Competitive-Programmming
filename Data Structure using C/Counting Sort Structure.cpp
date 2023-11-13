#include<stdio.h>
#include<math.h>
#include<string.h>
int findMax(int arra[], int l);
void countingSort(int arra[], int l, int k);
void print(int arra[], int k);

int main()
{
     int arra[100];
     int Xarra[100];
     int n, i;
     scanf("%d", &n);

     for (i = 0; i < n; i++)
     {
         scanf("%d", &arra[i]);
     }
     
     for (i = 0; i < n; i++)
     {
         Xarra[i] = arra[i];
     }
     
	int max = findMax(arra, n);
	countingSort(Xarra, n, max);
	print(Xarra, n);
	
}
void countingSort(int arra[], int l, int k)
{
	int count[k+1] = {0};
	int bArra[l];
	int i, j;
	for (i = 0; i < l; i++)
	{
		++count[arra[i]];
	}
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
