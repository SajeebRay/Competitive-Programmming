#include <stdio.h>

int main()
{
    int A, X,i,sum=0;
    scanf("%d",&A);
    while(scanf("%d",&X)&&X<=0);
    for(i=A;i<A+X;i++){
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
