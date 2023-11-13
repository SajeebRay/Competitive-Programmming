#include<stdio.h>
int main()
{
    int speed,time;
    double fuel,distance;
    scanf("%d%d",&time,&speed);
    distance=speed*time;
    fuel=distance/12;
    printf("%.3lf\n",fuel);
    return 0;
}
