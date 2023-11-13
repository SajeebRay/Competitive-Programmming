#include<stdio.h>
int main()
{
    double i,t,p,r,ip,ipm,ir,rate;
    printf("Enter your investment then the rate of profit and then time of investment: \n");
    scanf("%lf%lf%lf",&i,&r,&t);
    rate=r/100;
    ir=i*rate;
    ip=i+(ir*t);
    ipm=(ir)/12;
    printf("The amount you return: %.2lf\nAnd return per month: %.lf",ip,ipm);
    return 0;
}
