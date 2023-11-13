#include<stdio.h>
int main()
{
    int SAJEEB[10];
    int i,j,temp;

    for(i=0;i<10;i++){
        scanf("%d",&SAJEEB[i]);
    }

    for(i=0,j=9;i<10;i++,j--){
        temp=SAJEEB[j];
        SAJEEB[j]=SAJEEB[i];
        SAJEEB[i]=temp;
    }

    for(i=0;i<10;i++){
        printf("%d\n", SAJEEB[i]);
    }
    return 0;
}
