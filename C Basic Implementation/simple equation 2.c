#include<stdio.h>
int main()

{
    double a1,a2,b1,b2,c1,c2,x,y,d;
    printf("Enter equation 1 in the format of a1x+b1y=c1 and type the value of a1,b1,c1: \n");
    scanf("%lf%lf%lf",&a1,&b1,&c1);
    printf("Enter equation 2  in the format of a2x+b2y=c2 and type the value of a2,b2,c2: \n");
    scanf("%lf%lf%lf",&a2,&b2,&c2);
    d=a1*b2-a2*b1;
    if((int)d!=0){
        x=(b1*c2-b2*c1)/d;
        y=(a1*c2-a2*c1)/d;
        printf("The value of X: %.2lf\nThe value of Y:%.2lf\n",x,y);
    }
    else{
        printf("The result is complex number");
    }
    return 0;
}
