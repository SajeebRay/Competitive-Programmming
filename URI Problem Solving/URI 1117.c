
#include<stdio.h>
int main()
{
    float finally ,result = 0, n;
    int i = 0;

    while (1)
    {
        scanf("%f", &n);

        if ((int)n < 0 || 10 < (int)n)
        {
            printf("nota invalida\n");
        }

        else
        {
            result = result + n;
            i++;

            if (i == 2)
            {
                finally = result / 2;
                printf("media = %.2f\n", finally);
                break;
            }
        }

    }


    return 0;
}

