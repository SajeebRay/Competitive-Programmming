
#include<stdio.h>
int main()
{
    int X, i;
    scanf("%d", &X);
    if(X % 2  == 0){
        for(i = (X +1); i < (X + 13); i = i + 2)
            printf("%d\n", i);
    }
    else{
        for(i = X; i < (X + 12); i = i + 2){
            printf("%d\n", i);
        }
    }
    return 0;
}
