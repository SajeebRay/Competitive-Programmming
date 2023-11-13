// error cheak next
#include<stdio.h>
int main()
{
    int n1,n2,GCD,x,LCD,mul;
    scanf("%d%d",&n1,&n2);

    if(n1>n2)
    {
        n2=x;
    }
    else
    {
        n1=x;
    }
    for(; x>=1; x--)
    {
        if(n1%x==0&&n2%x==0)
        {
            GCD=x;
            break;
        }
    }

    mul=n1*n1;
    LCD = mul/GCD;
    printf("GCD: %d\nLCD: %d\n",GCD,LCD);

    return 0;
}
