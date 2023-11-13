#include<stdio.h>
int main()
{
    double x,y,z1,z2;
    scanf("%lf%lf",&z1,&z2);
    x=(z1+z2)/2;
    y=(z1-z2)/2;
    printf("%.2lf\n%.2lf\n",x,y);
    return 0;

}
