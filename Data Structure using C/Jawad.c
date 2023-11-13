#include<stdio.h>
int main()
{
    char *sajeeb, ch;
    int i;
    gets(sajeeb);
    for (i = 0; (ch = sajeeb[i]) !=  '\0'; i++)
    {
        if(ch <= 'z' && 'a' <= ch)
        {
            ch = 'A' + (ch - 'a');
        }
        putchar(ch);
    }
}
