#include<stdio.h>
int main()
{
    char NAME;
    double SALARY,SELL,TOTAL, PERCENTANGE;
    scanf("%c%lf%lf",&NAME,&SALARY,&SELL);
    PERCENTANGE=(SELL*15)/100;
    TOTAL = SALARY+PERCENTANGE;
    printf("TOTAL = R$ %.2lf",TOTAL);
    return 0;
} //name problem
