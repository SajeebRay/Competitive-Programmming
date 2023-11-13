#include<stdio.h>
int main()
{
    int NUMBER,WH;
    float MPH,SALARY;
    scanf("%d%d%f",&NUMBER,&WH,&MPH);
    printf("NUMBER = %d\n",NUMBER);
    SALARY=WH*MPH;
    printf("SALARY = U$ %.2f\n",SALARY);
	return 0;
}
