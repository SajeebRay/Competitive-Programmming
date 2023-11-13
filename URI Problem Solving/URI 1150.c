#include <stdio.h>

int main()
{
    int Z, X,i,sum=0, count = 0;
    scanf("%d",&X);
    while(scanf("%d",&Z)&&Z<=X);

    for(i=X;i<=Z;i++){
        sum+=i;
        count++;
        if (sum > Z)
        {
            printf("%d\n", count);
            break;
        }
    }

    return 0;
}
