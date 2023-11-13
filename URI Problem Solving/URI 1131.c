
#include<stdio.h>
int main()
{
    int x, y, choise, Gremio = 0, Inter = 0, Empates = 0, count = 0;

sajeeb:
    while (1)
    {
        scanf("%d %d", &x, &y);
        count++;

        if (x > y)
        {
            Inter++;
        }
        else if (y > x)
        {
            Gremio++;
        }
        else
        {
            Empates++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &choise);

        switch(choise)
        {
            case 1:
            {
                goto sajeeb;
            }
            case 2:
                {
                    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\nInter venceu mais\n", count, Inter, Gremio, Empates);
                    exit(0);
                }
        }
    }

    return 0;
}
