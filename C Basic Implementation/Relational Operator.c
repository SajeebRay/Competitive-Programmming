//Conditional control statement
    //if/else....swtich
//loop control statement

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%2==0)
        printf("Even: %d\n", num);

    else
        printf("Odd: %d\n", num);


    return 0;
}
