#include<stdio.h>
int main()
{
    int n,i,s;
    s=0;
    for(n=1; n<=20;n=n+1){
        for (i=1;i<=10;i=i+1) {
                s=s+n;
            printf("%d*%d=%d\n",n,i,s);
        }
    }
    return 0;

}
