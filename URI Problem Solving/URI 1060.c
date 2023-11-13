#include<stdio.h>
int main()
{
    float num[5];
    int i, count;
    count = 0;
    for(i=0; i<6; i++){
        scanf("%f",&num[i]);
    }
    for(i=0; i<6; i++){
        if(num[i]>0){
            count++;
        }
    }
    printf("%d valores positivos\n", count);
    return 0;
}
