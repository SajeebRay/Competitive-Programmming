/*
#include<stdio.h>
#include<conio.h>
#include<dos.h>

#define NAME 80

void main()
{
    char ch, name[NAME];
    int i;

    printf("Type your name: ");

    for (i=0; (ch = getchar()) != '\n'; ++i){
        name[i];
    }
    name[i] = '\0';

    printf("\n %s %s %s", "Nice to meet you", name, ".");
    sleep(2);

    printf("\n Your name spelled bacword is ");
    for(--i; i >= 0; --i){
        putchar(name[i]);
    }
    printf("\n\n\n Have a nice day. . . .\a\a\a");
    sleep(5);

}
*/
/*
#include<stdio.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
    float area,radius,pi;
    char ch;

    pi=3.14159;

    printf("\n Do you want to calculate area?(y\n): ");
    ch = getch();
    ch = toupper(ch);

    while( ch != 'N' ){
        printf("\n What's your redius?: ");
        scanf("%f", &radius);
        area = pi* radius * radius;
        printf("\n\n Area of a circle is: %.2f.", area);
        printf("\n\n\n Do you want to calculate area?(y\n): ");
        ch = getch();
        ch = toupper(ch);

    }
}
*/
/*
#include<stdio.h>
#include<conio.h>
void main()
{
    float cel, far;
    printf("\n ENTER TEMPERATURE IN CENTIGRADE: ");
    scanf("%f", &cel);
    far = 1.8 * cel + 32;
    printf("\n Farhenheit eqaivalent is: %.2f", far);
    getch();

}
*/
/*
#include<stdio.h>
int main()
{
    int n1,value, n2;
    value = scanf("%d%d", &n1,&n2);
    printf("%d", value);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char ara[100];

    while( NULL!= gets(ara)){
        printf("%s\n", ara);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char str1[] = "Bangla", str2[] = "desh", str3[13]="sajeebKumarRay";
    int i, j, length1 = 6, length2 = 4;
    for(i=0, j=2; i< length1; i++, j++){
        str3[j] = str1[i];
    }
    for(i=0, j=8; i<length2; i++, j++){
        str3[j] = str2[i];
    }
    str3[j] = '\0';
    printf("%s\n", str3);
    return 0;
}
*/
/* Trouble
#include<stdio.h>
int string_compare(char a[], char b[])
{
    int i, j;
    for(i=0; a[i] != '\0' && b[i] !='\0'; i++){
        if(a[i] < b[i]){
            return -1;
        }
        else if(a[i] >b[i]){
            return 1;
        }
    }
}
int main()
{
    int result;
    char A[] = "sajeebKumarRay", B[] = "sajeebKumarRay";
    result = string_compare(A,B);
    printf("%d", result);
    return 0;
}
*/
/*
// C program to find maximum in arr[] of size n
#include <stdio.h>

// C function to find maximum in arr[] of size n
int largest(int arr[], int n)
{
	int i;

	// Initialize maximum element
	int max = arr[0];

	// Traverse array elements from second and
	// compare every element with current max
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

int main()
{
	int arr[] = {10, 324, 45, 90, 9808};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Largest in given array is %d", largest(arr, n));
	return 0;
}
*/
/*
#include <stdio.h>
#include <ctype.h>

int main()
{1000111111
    char *sajeeb;
    char str, l;
    int i = 0;

    gets(sajeeb);

    while ((str= sajeeb[i]) != '\0')
    {
        l = tolower(str);
        putchar(l);
        i++;
    }

    return 0;
}
*/
/* Troble
#include<stdio.h>
int main()
{
    int i, n;
    float x, y, sum;

    printf("Input a number(x): ");
    scanf("%f", &x);

    x = (x * 3.1416 )/ 180;
    y = 1;
    sum = 1;

    for (i = 0; i < x+1; i++)
    {
        y = y * pow ((double)(-1), (double)((2 * i -1) * x * x )/ (2 * i * (2 * i - 1)));

        sum = sum + y;
    }

    printf("\n cos(x) = %.3f", sum);

    return 0;

}
*/



