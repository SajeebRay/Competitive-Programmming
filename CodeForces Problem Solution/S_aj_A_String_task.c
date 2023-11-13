#include<stdio.h>
#include<string.h>

int main()
{
    char ch, saj[100];
    int i, l;

    gets(saj);
    strlwr(saj);
    l = strlen(saj);

    for (i = 0; i < l; i++)
    {
        ch = saj[i];
        if ((ch != 'a') &&  (ch != 'e') && (ch != 'i') && (ch != 'o') && (ch != 'u')&& (ch != 'y'))
        {
            printf(".%c", ch);
        }
    }
    printf("\n");
    return 0;
}
