#include<stdio.h>
int main()
{
    double celcious,fahrenheight;
    scanf("%lf",&celcious);
    fahrenheight = (celcious * 1.8)+32;
    printf("fahrenheight = %.2lf\n",fahrenheight);
    return 0;
}
