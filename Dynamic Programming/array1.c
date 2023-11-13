#include<stdio.h>
int main()
{
    int i;
    int mark[5] = {10, 5, 7, 8, 9};
    int sum = 0;
    float mean;
    for(i = 0; i < 5; i++){
        sum = sum+mark[i];
    }
    mean = (float)sum/5;
    printf("%f\n", mean);

    return 0;
}
