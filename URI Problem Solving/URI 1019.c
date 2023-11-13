#include<stdio.h>
int main()
{
    int N,H,HR,M,S;
    scanf("%d",&N);
    H=N/3600;
    HR=N%3600;
    M=HR/60;
    S=HR%60;
    printf("%d:%d:%d\n",H,M,S);
    return 0;
}
