#include<stdio.h>
int main()
{
    int h1,h2,timeHour;
    scanf("%d%d",&h1,&h2);
    timeHour = h2 - h1;
    if(timeHour>1 && timeHour<23){
        printf("O JOGO DUROU %d HORA(S)\n", timeHour);
    }
    else if(timeHour < 0){
        timeHour = timeHour + 24;
        printf("O JOGO DUROU %d HORA(S)\n", timeHour);
    }
    else if(timeHour == 0){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}
