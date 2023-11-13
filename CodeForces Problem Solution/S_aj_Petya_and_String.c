#include<stdio.h>
#include<string.h>

int compare_string(char saj[], char raj[])
{
    strlwr(saj);
    strlwr(raj);

    if (strcmp(saj, raj) == 0)
        return 0;
    else if (strcmp(saj, raj) < 1)
        return -1;
    else
        return 1;
}

int main()
{
    char s[100], r[100];
    gets(s);
    gets(r);

    printf("%d\n", compare_string(s, r));

    return 0;
}

