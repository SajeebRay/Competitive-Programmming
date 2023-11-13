
#include<stdio.h>
int main()
{
    int i, saj[4], even = 0, odd = 0, positive = 0, negative = 0;
    for(i = 0; i < 5; i++){
        scanf("%d", &saj[i]);
    }
    for(i = 0; i < 5; i++){
        if(saj[i] % 2 == 0){
            even = even + 1;
        }
    }
    for(i = 0; i < 5; i++){
        if(saj[i] % 2 == 1 || saj[i] %2 == -1){
            odd = odd + 1;
        }
    }
    for(i = 0; i < 5; i++){
        if(saj[i] > 0){
            positive++;
        }
    }
    for(i = 0; i < 5; i++){
        if(saj[i] < 0){
            negative++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", even, odd, positive, negative);
    return 0;
}
