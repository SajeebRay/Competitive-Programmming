#include<stdio.h>
int main()
{
    int S,h,m,s,hr;
    scanf("%d",&S);
    if(0<=S<=86400){
        h = S/3600;
    hr = S%3600;
    m = hr/60;
    s = hr%60;
    printf("%d:%d:%d",h,m,s);
    }

    return 0;
}
