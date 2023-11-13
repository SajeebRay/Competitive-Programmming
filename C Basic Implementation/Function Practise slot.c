/** //sum
#include<stdio.h>

int find_sum(int a, int b)
{
    int sum;

    sum = a + b;

    return sum;
}
int main()
{
    int X, Y, s;
    scanf("%d %d", &X, &Y);

    s = find_sum(X, Y);

    printf("Sum: %d\n", s);

    return 0;
}
*/
/** //square
#include<stdio.h>
int sqaure_fun(int X)
{
    int s;

    s = X*X;

    return s;
}
int main()
{
    int square, a;
    scanf("%d", &a);

    square = sqaure_fun(a);

    printf("Square is: %d\n", square);

    return 0;
}

*/
/** //Area of triangle
#include<stdio.h>

float find_area(float a, float b, float c)
{
    float area, s;

    if ((a + b > c) && (b + c > a) && (c + a > b));
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    }

    return area;
}

int main()
{
    float X, Y, Z, Area;
    scanf("%f %f %f", &X, &Y, &Z);

    Area = find_area(X, Y, Z);

    printf("Area: %.2f\n", Area);

    return 0;
}
*/
/** //to the power function
#include<stdio.h>
int find_square(int x, int y)
{
    int result = 1, i;

    for (i = 1; i <= y; i++)
    {
        result *= x;
    }

    return result;
}
int main()
{
    int A, B, Result;
    scanf("%d %d", &A, &B);

    Result = find_square(A, B);

    printf("Result: %d\n", Result);

    return 0;
}
*/
/** //to the power using library function
#include<stdio.h>
int find_square(int x, int y)
{
    int result;

    result = pow(x, y);

    return result;
}
int main()
{
    int A, B, Result;
    scanf("%d %d", &A, &B);

    Result = find_square(A, B);

    printf("Result: %d\n", Result);

    return 0;
}
*/
/** //max
#include<stdio.h>

char find_max(char arra[20])
{
    int i, max = arra[0];

    for (i = 0; i < 20; i++)
    {
        if (max < arra[i])
        {
            max = arra[i];
        }
    }

    return max;
}
int main()
{
    char Ara[20];
    int i, MAX;

    for (i = 0; i < 20; i++)
    {
        scanf("%c", &Ara[i]);
    }
    MAX = find_max(Ara);
    printf("Max: %c\n", MAX);

    return 0;
}
*/
/** //GCD LCD in function
#include<stdio.h>
#include<time.h>

int gcd(int a, int b)
{
    int temp, rem;
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else
    {
        while (b != 0)
        {
            rem = a % b;
            a = b;
            b = rem;
        }
        return a;
    }
}
int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    time_t start, end; //for timer
    time(&start); // timer start
    int GCD = gcd(x, y);

    printf("GCD = %d\n", GCD);
    time(&end); //timer end

    printf("Processing time %d", end - start); //for timer
    return 0;
}*/
/** //recursive function
#include<stdio.h>

int recur(int n);
int recur2(int n);

int main()
{
    int X;
    scanf("%d", &X);

    int sum = recur(X); //1+2+3.....n

    printf("sum = %d\n", sum);

    int sum2 = recur2(X); //1+3+5....n
    printf("sum = %d", sum2);

    return 0;
}
int recur(int n)
{
    if (n == 0)
    {
        return n;
    }
    else
    {
        return (n + recur(n - 1));
    }
}
int recur2(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else //error
    {
        return (n + recur(n - 2));
    }
}
*/
/** //recursion in stack
#include<stdio.h>
#include<string.h>
#include<conio.h>

void back_print(void)
{
    char ch;
    if ((ch = getchar()) != '\n')
        back_print();
    putchar(ch);
}
int main()
{
    printf("using recursion\n");
    back_print();

    printf("\nusing strrev\n");
    char str[100];
    gets(str);
    strrev(str);
    puts(str);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	// This pointer will hold the
	// base address of the block created
	int* ptr;
	int n, i;

	// Get the number of elements for the array
	n = 5;
	printf("Enter number of elements: %d\n", n);

	// Dynamically allocate memory using calloc()
	ptr = calloc(n, sizeof(int));

	// Check if the memory has been successfully
	// allocated by calloc or not
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using calloc.\n");

		// Get the elements of the array
		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}

		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
	}

	return 0;
}

