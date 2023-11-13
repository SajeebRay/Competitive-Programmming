
#include<stdio.h>
int main()
{
    int i, saj[4], even = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &saj[i]);
    }
    for(i = 0; i < 5; i++){
        if(saj[i] % 2 == 0){
            even = even + 1;
        }
    }
    printf("%d valores pares\n", even);
    return 0;
}
