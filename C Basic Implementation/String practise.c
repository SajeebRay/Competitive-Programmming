/**
#include <stdio.h>
#include<string.h>
int string_length(char str[])
{
    int i, length = 0;
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }
    return length;
}
int main()
{
    char country[100];
    int length;
   gets(country);
        length = string_length(country);
        printf("length: %d\n", length);
    strrev(country);
    puts(country);
    return 0;
}*/
// strlen is amazing
/** //anisul all srting
#include<stdio.h>
int main()
{
    char Name[50] = "My name is ", sajeeb[] = "sajeebSAJEEBsajeeb ray", copy[25], copy_extend[25];
    char s;

    int length, count = 0, i = 0, j, n;

    printf("enter %d: ", strlen(Name));
    scanf("%d", &n);
    printf("now enter %d: ", strlen(sajeeb));
    scanf("%d", &length);

    for (i = 0, j = n; i < length; j++, i++)
    {
        Name[j] = sajeeb[i];
    }
    puts(Name);st

    while ((s = sajeeb[i]) != 0)
    {
        count++;
        putch(s);
        printf("\n");
        i++;
    }

    for (i = 0; i < 25; i++)
    {
        copy_extend[i] = sajeeb[i];
    }



    strcpy(copy, sajeeb);
    puts(sajeeb);
    puts(copy);
    puts(copy_extend);


    printf("count is %d  \n", count);

    printf("length is %d\n",strcmp(sajeeb, Name));





    strcat(Name, sajeeb);
    puts(Name);
}
*/
/** //sorting
#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    fgets(str, 1000, stdin);

    int l = strlen(str);

    char temp;
    for (int i = 1; i < l; i++)
    {
        for (int j = 0; j < l-1; j++)
        {
            if (str[j] > str[j+1])
            {
                temp = str[j+1];
                str[j+1] = str[j];
                str[j] = temp;
            }
        }
    }

    puts(str);
    return 0;
}
*/
/** //strong password
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, n;
    scanf("%d", &n);

    char s[100];

    scanf("%s", s);
    int digit = 0, up = 0, low = 0, sp = 0;

    for (i = 0; i < n; i++)
    {
        if (s[i] >= '0' && '9' >= s[i])
        {
            digit++;
        }
        if (s[i] >= 'A' && 'Z' >= s[i])
        {
            up++;
        }
        if (s[i] >= 'a' && 'z' >= s[i])
        {
            low++;
        }
        if (s[i] >= '!' && '+' >= s[i])
        {
            sp++;
        }
    }

    int number = 0;

    if (digit == 0){
        ++number;}
    if (up == 0){
        ++number;}
    if (low == 0){
        ++number;}
    if (sp == 0){
        ++number;}

    if (n >= 6)
    {
        printf("%d", number);
    }
    else
    {
        if (number > (6-n))
        {
            printf("%d", number);
        }

        else{
            printf("%d", 6-n);}
    }

    return 0;
}
*/

