#include<stdio.h>
int main()
{
    int CODE1,CODE2,UNIT1,UNIT2;
    float PRICE1,PRICE2,TOTAL_PRICE1,TOTAL_PRICE2,TOTAL;
    scanf("%d%d%f%d%d%f",&CODE1,&UNIT1,&PRICE1,&CODE2,&UNIT2,&PRICE2);
    TOTAL_PRICE1 = UNIT1*PRICE1;
    TOTAL_PRICE2 = UNIT2*PRICE2;
    TOTAL = TOTAL_PRICE1+TOTAL_PRICE2;
    printf("VALOR A PAGAR: R$ %.2f\n",TOTAL);
    return 0;
}
