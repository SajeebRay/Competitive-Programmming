/*#include <stdio.h>

void update(int *a,int *b) {
    int x,y, sum, def;
     sum = x + y;*a = sum;
    return *a;

    def = abs(x - y);
    *b = def;
    return *b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}*/
/*
#include <stdio.h>

int main()
{
    int A, X,i,sum=0;
    scanf("%d",&A);
    while(scanf("%d",&X)&&X<=0);
    for(i=A;i<A+X;i++){
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
*/
/**  // trouble shout in dynamic array.
#include<stdio.h>
#include<string.h>
int main()
{
    int oneD[1000], twoD[1100][1100];
    int number_of_selves;
    scanf("%d", &number_of_selves);

    int number_of_queries;
    scanf("%d", &number_of_queries);

    while (number_of_queries--)
    {
        int shelf, page;
        scanf("%d %d", &shelf, &page);

        oneD[shelf]++;

        int
    }


}*/


