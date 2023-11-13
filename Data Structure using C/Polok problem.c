#include<stdio.h>
int main()
{
    int n,x,rev;
    rev=0;

    scanf("%d",&n);

    while(n>0){
        x=n%10;
        rev=rev*10+x;
        n=n/10;
    }

    printf("%d\n",rev);

    return 0;
}
