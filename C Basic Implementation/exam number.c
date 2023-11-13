#include<stdio.h>
int main()
{
    double Eone,Etwo,Efinal,p1,p2,pfinal,Marks;
    scanf("%lf%lf%lf",&Eone,&Etwo,&Efinal);
    p1 = Eone/4;
    p2 = Etwo/4;
    pfinal = Efinal/2;
    Marks = p1+p2+pfinal;
    printf("Full marks: %.2lf",Marks);
    return 0;
}
