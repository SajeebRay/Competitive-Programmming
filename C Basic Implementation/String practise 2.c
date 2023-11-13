/** //strcmp
// C program to illustrate
// strcmp() function
#include<stdio.h>
#include<string.h>

int main()
{

	char saj1[] = "sajeeb", saj2[] = "sajeeb";

	if (strcmp(saj1, saj2) == 0)
    {
        printf("Equal\n");
    }
	return 0;
}
*/
/** //reverse
#include<stdio.h>
int main()
{
    int l, m, j;
    char str1[40], sa[40], reverse[20];

/*** string reverse *******************************************
    printf("Enter string: ");
    scanf("%s", &reverse);
    strrev(reverse);
    printf("Reverse is %s\n", reverse);

    printf("Enter another string: ");
    scanf("%s", &str1);
printf("Enter another string: %c\n", str1[4]);
    l = strlen(str1);
    for ( j = 0, m = l-1; m >= 0;  j++, m--)
    {
        sa[j] = str1[m];

    }

    sa[j] = '\0';
    puts(sa);

    return 0;
}
*/
/** //palindrome
#include<stdio.h>
int main()
{
    int i, j, l, X;
    char ch, str[60], str2[60];

    printf("Enter a string: ");
    gets(str);

    l = strlen(str);

    for (i = 0, j = l-1; j >= 0; i++, j--)
    {
        str2[i] = str[j];
    }

    printf("%s the general\n%s the reverse\n", str, str2);

    X = strcmp(str, str2);

    if (X == 0)
    {
        printf("The string is palindrome\n");
    }
    else
    {
        printf("The string is not palindrome\n");
    }

    return 0;
}
*/
/** //swapping
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20] = "Bangladesh";
    char str2[20] = "India";
    char temp[20];

    puts(str1);
    puts(str2);

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    puts(str1);
    puts(str2);

    return 0;
}
*/
/** //Find number, digit, vowel, consonant
#include<stdio.h>
#include<string.h>

int main()
{
    char ch, str1[100] = "Bangladesh is a beautiful country. 1971@";
    int  i = 0, count = 0, vowel = 0, word = 0, digit = 0, consonant = 0, other = 0;

    while ((ch = str1[i]) != '\0')
    {
        count++;
        if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u'
            || ch == 'A' || ch == 'E' || ch == 'O' || ch == 'I' || ch == 'U')
        {
            vowel++;
        }
        else if ((ch <= 'z' && 'a' <= ch) || (ch <= 'Z' && 'A' <= ch))
        {
            consonant++;
        }
        else if (ch <= '9' && '0' <= ch)
        {
            digit++;
        }
        else if (ch == ' ')
        {
            word++;
        }
        else
        {
            other++;
        }
        i++;
    }
    word++;

    printf("Total: %d\nVowel: %d\nConsonant: %d\nWord: %d\nDigit: %d\nOther: %d\n",
           count, vowel, consonant, word, digit, other);

    return 0;
}
*/
/** //uppercase lowercase
#include<stdio.h>
#include<string.h>

int main()
{
    char ch, str[10] ;
    gets(str);
    puts(str);

    strupr(str);
    puts(str);

    strlwr(str);
    puts(str);

    return 0;

}
*/
/** //confidential document
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int limit;
    scanf("%d", &limit);

    char str[100];
        scanf("%s", &str);
    int n;
    scanf("%d", &n);

    for (int i = 0; i < limit; i++)
    {
        unsigned char ch = str[i];
        if (97 <= ch && ch <= 122)
        {
            ch = ch + (n % 26);
            if (ch > 122)
            {
                ch = 96 + (ch - 122);
            }
            str[i] = ch;
        }
        if (65 <= ch && ch <= 90)
        {
            ch = ch + (n % 26);
            if (ch > 90)
            {
                ch = 64 + (ch - 90);
            }
            str[i] = ch;
        }

    }

        printf("%s", &str);
}#
*/
/** //cheak with main string
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char *cheakStr(char *str);
int main(){

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str[1024];
        scanf("%s", str);

        printf("%s\n", cheakStr(str));
    }

    return 0;
}
char *cheakStr(char *str)
{
    int i = 0, j = 0;
    char* mainSTr = "hackerrank\0";
    while (str[i] != '\0')
    {
        if (str[i] == mainSTr[j])
            j++;
        i++;
    }
    if (strlen(mainSTr) == j)
        return ("YES");
    else
        return ("NO");

}
*/
/** //srting convert into word by word
#include<stdio.h>
int main()
{
    char str[1000], word[100][100];
    int line = 0, index = 0;
    fgets(str, 1000, stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            word[line][index] = '\0';
            line++;
            index = 0; //for  next word
        }
        else
        {
            word[line][index] = str[i];
            index++;
        }
    }

    for (int i = 0; i <= line; i++)
    {
        printf("%s\n", word[i]);
    }

    return 0;
}
*/
/** //string double element deletion
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[100];

    scanf("%s", &s);
    int l = strlen(s);
    int count = 0;

    while (l > 0 && count == 0)
    {
        count++;
        for (int i =0; i < l-1 ; )
        {
            if (s[i] == s[i+1])
            {
                for (int j= i; j < l-2; j++)
                {
                    s[j] = s[j+2];
                }
                l = l - 2;
                count = 0;
            }
            else
            {
                i++;
            }
        }
        s[l] = '\0';
    }

    if (l != 0)
    {
        printf("%s", s);
    }
    else
    {
        printf("Empty String");
    }

    return 0;
}*/
/** //a-z alphabet in one line
#include<stdio.h>
#include<string.h>
char* cheak(char *str, int n)
{
    char i = 'a';
    int flag;
    while (i <= 'z')
    {
        flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (str[j] == i || str[j] == i-32)
            {
                i++;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            break;
    }

    if (flag == 1)
        return ("pangram\n");
    else
        return ("not pangram\n");
}
int main()
{
    char str[1000];
    scanf("%[^\n]", str);
    int n = strlen(str);

    printf("%s", cheak(str, n));

    return 0;
}*/
