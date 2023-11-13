/*imran
#include<stdio.h>
int main()
{
    double n1,sum=0;
    while(1){
        printf("Enter two numbers\n");
        scanf("%lf",&n1);
        sum=sum+n1;
        printf("The sum is: %-6.2lf\n", sum);
    }
    return 0;
}
*/


#include <stdio.h>


int main(){
    int notes, aux;

    scanf("%d", &notes);

    printf("%d\n", notes);
    printf("%d nota(s) de R$ 100,00\n", notes/100);
    aux = (notes%100);


    printf("%d nota(s) de R$ 50,00\n", aux/50);
    aux = (aux%50);


    printf("%d nota(s) de R$ 20,00\n", aux/20);
    aux = (aux%20);


    printf("%d nota(s) de R$ 10,00\n", aux/10);
    aux = (aux%10);


    printf("%d nota(s) de R$ 5,00\n", aux/5);
    aux = (aux%5);


    printf("%d nota(s) de R$ 2,00\n", aux/2);
    aux = (aux%2);


    printf("%d nota(s) de R$ 1,00\n", aux/1);
    return 0;
}
