#include<stdio.h>

double Celcious_function(double celcious);

int main()
{
    double celcious, fahrenheight;
    scanf("%lf",&celcious);

    fahrenheight = Celcious_function(celcious);

    printf("%.2lf",fahrenheight);

    return 0;
}

double Celcious_function(double celcious)
{
    double farenheight = (celcious*1.8)+32;


    return farenheight;
}
