//Tree-String permutation
#include<stdio.h>
#include<string.h>
void permutation(char str[], int k);
void print(char str[], int k);
int main()
{
    char str[10] = "abcdefg";
    permutation(str, 0);
}
void permutation(char str[], int k)
{
    static int a[10] = {0};
    static char p[10];
    int i;

    if (str[k] == '\0')
    {
        static int l = 1;
        print(p, k);
        printf("   %d\n", l++);
    }

    else
    {
        for(i = 0; (str[i] != '\0'); i++)
        {
            if (a[i] == 0)
            {
            p[k] = str[i];
            a[i] = 1;

            permutation(str, k+1);
            a[i] = 0;
            }
        }
    }
}
void print(char str[], int k)
{
    for (int i = 0; i < k; i++)
    {
        printf("%c ", str[i]);
    }
}
