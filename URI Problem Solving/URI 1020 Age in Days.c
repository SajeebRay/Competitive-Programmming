#include<stdio.h>
int main()
{
    int Days,year,yearRemain,month,day;
    scanf("%d",&Days);
    year=Days/365;
    yearRemain=Days%365;
    month=yearRemain/30;
    day=yearRemain%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
    return 0;
}
