#include<stdio.h>
int find_min(int ara[], int n);
int main()
{
    int ara[]={21,21,23,-12,12,-22,26,-100,25,23,15,230,15,16,-120,-21021202};
    int MIN, n=16;
    MIN=find_min(ara,n);
    printf("Min Value: %d\n", MIN);
    return 0;
}
int find_min(int ara[], int n)
{
    int i;
    int Min=ara[0];
    for(i=0;i<n;i++){
        if(ara[i]<Min){
            Min=ara[i];
        }
    }
    return Min;
}
