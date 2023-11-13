#include<stdio.h>
int main()
{

    int cases, i, value, total, coelho = 0, rato  = 0, sapo = 0;
    char ch, x = '%';
    double p, q, r;

    scanf("%d", &cases);

    for (i = 1; i <= cases; i++)
    {
        scanf("%d %c", &value, &ch);

        if (ch == 'C')
        {
            coelho = coelho + value;

        }
        else if (ch == 'R')
        {
            rato = rato + value;

        }
        else if (ch == 'S')
        {
            sapo = sapo + value;

        }
    }

    total = coelho + rato + sapo;
    p =(coelho*100.00) / total;
    q =(rato*100.00) / total;
    r =(sapo*100.00) / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2f %c\n", p, x);
    printf("Percentual de ratos: %.2f %c\n", q, x);
    printf("Percentual de sapos: %.2f %c\n", r, x);

    return 0;
}
