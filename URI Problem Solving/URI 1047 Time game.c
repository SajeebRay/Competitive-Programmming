#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,h1m1,h2m2,hm,timeHour,timeMinute;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    h1m1 = h1*60 + m1;
    h2m2 = h2*60 + m2;
    hm = h2m2 - h1m1;
    if(hm>1 && hm<1439){
        timeHour = hm/60;
        timeMinute = hm%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", timeHour, timeMinute);
    }
    else if(hm < 0){
        hm = hm + 1440;
        timeHour = hm/60;
        timeMinute = hm%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", timeHour, timeMinute);
    }
    else if(hm == 0){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    return 0;
}
