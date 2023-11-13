#include<stdio.h>
int main()
{
    double num, sum = 0;
    int i, X, count = 0;

sajeeb:
    while (1)
    {
        scanf("%lf", &num);

        if (num > 10 || 0 > num)
        {
            printf("nota invalida\n");
        }

        else
        {
            sum = sum + num;
            count++;

            if (count == 2)
            {
                count = 0;
                printf("media = %.2lf\n", sum/2);
                sum = 0;
saj:
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &X);

                switch(X)
                {

                case 1:
                {
                    goto sajeeb;
                }
                case 2:
                {
                    exit(0);
                }
                default:
                {
                    goto saj;
                }

                }
            }
        }
    }

    return 0;
}
