
#include<stdio.h>
int main()
{
    float saj[5], sum = 0, average;
    int i, positives = 0;
    for(i = 0; i < 6; i++){
        scanf("%f", &saj[i]);
    }
    for(i = 0; i < 6; i++){
        if(saj[i] > 0){
            positives++;
            sum = sum + saj[i];

        }
    }
    average = sum / positives;
    printf("%d valores positivos\n%.1f", positives, average);
    return 0;
}
