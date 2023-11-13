#include<stdio.h>
int main()
{
    int SAJEEB[20];
    int i,Total;
    Total=0;

    for(i=0;i<20;i=i+2){
        scanf("%d",&SAJEEB[i]);
    }
    for(i=0;i<20;i=i+2){
        Total= Total+SAJEEB[i];
    }

    printf("Total: %d\tAvarege: %d\n",Total,Total/10);

    return 0;
}
