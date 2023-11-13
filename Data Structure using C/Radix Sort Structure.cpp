#include<stdio.h>
#include<math.h>

void radixSort(int arra[], int l, int max);
void countingSort(int arra[], int l, int poss);
int findMax (int arra[], int l);
void print (int arra[], int l);

int main()
{
	int arra[] = {888,44,666,245,485,564,313,5,499,135,684,2};
	int l = 12;
	int max = findMax(arra, l);

	radixSort(arra, l, max);
	print(arra, l);
	
	return 0;
}
void radixSort(int arra[], int l, int max)
{
	int i;
	
	for (int poss = 1; (max/poss) > 0; poss *= 10)
	{
		countingSort(arra, l, poss);
	}
}
void countingSort(int arra[], int l, int poss)
{
	int i;
	int count[10] = {0};
	int bArra[l];
	
	for (i = 0; i < l; i++)
	{
		++count[(arra[i]/poss) % 10];
	}
	for (i = 1; i < 10; i++)
	{
		count[i] = count [i] + count [i-1];
	}
	for (i = l-1; i >= 0; i--)
	{
		bArra[--count[(arra[i]/poss)%10]] = arra[i];
	}
	for (i = 0; i < l; i++)
	{
		arra[i] = bArra[i];
	}
}
void print (int arra[], int l)
{
	for (int i = 0; i < l; i++)
	{
		printf("%d ", arra[i]);
	}
}
int findMax (int arra[], int l)
{
	int i;
	int max = 0;
	
	for (i = 0; i < l; i++)
	{
		if (arra[i] > max)
		{
			max = arra[i];
		}
	}
	
	return max;
}

