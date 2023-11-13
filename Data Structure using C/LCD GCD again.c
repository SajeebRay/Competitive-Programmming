#include<stdio.h>
int main()
{
    int a,b,r,GCD,LCD,mul;
    scanf("%d%d",&a,&b);
    mul =a*b;
    if(a==0){
        GCD=b;
    }
    else if(b==0){
        GCD=a;
    }
    else{
        for(;b!=0;){
            r=b;
            b=a%b;
            a=r;
        }
        GCD=a;


    }

    LCD = mul/GCD;
    printf("GCD: %d\nLCD: %d",GCD,LCD);
    return 0;
}
