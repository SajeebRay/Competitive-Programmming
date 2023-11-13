#include<stdio.h>
int main()
{
    int a, i;
    printf("Enter Value a: ");
    scanf("%d", &a);
    for(int i = 1; i <= a; i = i+1){
        printf(" %d", i);
    }
    return 0;
}
