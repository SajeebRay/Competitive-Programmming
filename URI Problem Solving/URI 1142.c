#include<stdio.h>
int main()
{

    int N, i, j, count = 0;
    scanf("%d", &N);

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j < 4; j++)
        {
            count++;
            printf("%d ", count);
        }

        count++;
        printf("PUM\n");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int N, a,b,c=1,d=4;
    scanf("%d", &N);
    for(a=1;a<=N;a++)
    {
        for(b=c;b<=d;b++)
        {
            if(b%4==0)
                printf("PUM\n");
            else
                printf ("%d ",b);
        }
        c+=4; d+=4;
    }
    return 0;
}
