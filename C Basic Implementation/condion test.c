#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x%2==0){
        printf("The number is even %d\n", x);
    }
    else {
        printf("The number is odd %d\n", x);
    }
    return 0;
}
