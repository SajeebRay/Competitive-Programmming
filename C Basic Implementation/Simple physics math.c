#include<stdio.h>
int main()
{
    /*suppose a particle's valocity u,
     and it's acceleration a. After some time 't' it's valocity became 'v'.
    The question is that "if time is 2t, how much distance it can go*/
    double a,u,t,v,s;
    scanf("%lf%lf",&t,&v);
    s=2*v*t;
    printf("The distance is: %.2lf",s);
    return 0;

}
