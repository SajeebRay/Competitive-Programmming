#include<stdio.h>
int main()
{
    int A,B,C,D,E,G;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    E=A+B;
    G=C+D;
    if(B>C&&D>A&&G>E&&C>0&&D>0&&A%2==0){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}
