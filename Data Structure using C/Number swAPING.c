/*without temp
#include<stdio.h>
int main()
{
    int num1 = 10;
    int num2 = 5;
    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;

    printf("%d %d\n", num1, num2);
    return 0;
}*/
/* with temp
#include<stdio.h>
int main()
{
    int num1 = 5;
    int num2 = 10;
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("%d %d\n", num1,num2);
    return 0;
}*/
