#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char** temp;

void mergeSort(char** arra, int high);
int main()
{
	char**string;
	
	int n, i;
	scanf("%d",&n);
	
	string = (char**)malloc(n * sizeof(char*));
	temp = (char**)malloc(n * sizeof(char*));
	
	for (i = 0; i < n; i++)
	{
		scanf("%ms", &string[i]);
	}
	
	mergeSort(string, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%s\n", string[i]);
	}
}
void mergeSort(char** arra, int high)
{
	if (high <= 1)
		return;
	
	int mid = high/2;
	mergeSort(arra, mid);
	mergeSort(&(arra[mid]), (high-mid));
	
	int i, j, k;
	for (i = k = 0, j = mid; i < mid && j < high; k++)
	{
		int A = strlen(arra[i]);
		int B = strlen(arra[j]);
		
		if (A < B || (A == B && strcmp(arra[i], arra[j]) < 0))
		{
			temp[k] = arra[i++];
		}
		else 
		{
			temp[k] = arra[j++];
		}
	}
	
	while (i < mid)
	{
		temp[k++] = arra[i++];
	}
	while (j < high)
	{
		temp[k++] = arra[j++];
	}
	
	for (i = 0 ; i < high; i++)
	{
		arra[i] = temp[i];
	}
}
