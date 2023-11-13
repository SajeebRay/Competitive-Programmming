#include<stdio.h>

int main()
{
    char saj[100];
    int  i, l;
    gets(saj);

    if (saj[0] >= 97 && 122 >= saj[0])
    {
        saj[0] = 65 + (saj[0] - 97);
    }
    printf("%s\n",saj);

    return 0;
}
