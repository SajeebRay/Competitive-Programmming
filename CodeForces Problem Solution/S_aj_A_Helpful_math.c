#include<stdio.h>

int main()
{
    char saj[100], t;
    int  i, j, l;
    gets(saj);

    l = strlen(saj);
    for (i = 2; i < l; i = i+2)
        for(j = 0; j < l-i; j = j+2)
                if (saj[j] > saj[j+2])
                {
                    t = saj[j];
                    saj[j] = saj[j+2];
                    saj[j+2] = t;
                }

    printf("%s\n",saj);

    return 0;
}
