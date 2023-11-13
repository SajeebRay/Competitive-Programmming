#include<stdio.h>
int Max_find(int ara[],int n);
int main()
{
    int ara[]= {-100,0,53,22,83,23,89,-132,201,3,85};
    int n = 11;
    int MAX = Max_find(ara, n);
    printf("%d\n", MAX);
    return 0;
}
int Max_find(int ara[], int n)
{
    int Max = ara[0];
    int i;
    for(i=1;i<n;i++){
        if(ara[i]>Max){
            Max=ara[i];
        }
    }
    return Max;
}
