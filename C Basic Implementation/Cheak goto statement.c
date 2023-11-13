/*
#include<stdio.h>
int main()
{
    int i = 0;

sajeeb:
    printf("%d\n", i);
    i++;

    if(i<6)
        goto sajeeb;

    return 0;
}
*/
#include<stdio.h>
int main()
{
    int i;
    for(i=0; i<20; i++)
    {
        if(i%2==0)
            continue;
            printf("%d")

        if(i == 17)
            break;
    }

    return 0;
}
