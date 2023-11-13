#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int five, four, three, two, one;
	
	five = n/5;
	n = n - five *5;
	four = n/4;
	n = n - four * 4;
	three = n/3;
	n = n - three * 3;
	two = n/2;
	n = n - two * 2;
	one = n/1;
	
	printf("%d\n", five+four+three+two+one);
	
	return 0;
}
