#include<stdio.h>
int main()
{
    int num1, num2, rem, n1,n2, gcd, lcd;
    scanf("%d%d", &num1, &num2);
    n1 = num1;
    n2 = num2;
    if(n1 == 0)
    {
        gcd = n2;
    }
    else if(n2 == 0)
    {
        gcd = n1;
    }
    else
    {
        while(n1 != 0)
        {
            rem = n2 % n1;
            n2 = n1;
            n1 = rem;

        }
    }

    gcd = n2;
    printf("%d\n", gcd);
    lcd = (num1 * num2) / gcd;
    printf("LCD: %d\n", lcd);

    return 0;
}
/*
#include<stdio.h>
int main()
{
    int n1,n2,r,GCD;
    scanf("%d%d",&n1,&n2);
    if(n1==0)12

    {
        GCD=n2;4

    }
    else if(n2==0)
    {
        GCD=n1;
    }
    else
    {
        while(n2!=0)
        {
            r=n1;
            n1=n2%n1;
            n2=r;
        }
        GCD=n2;
    }
    printf("GCD: %d",GCD);
    return 0;
}
*/
