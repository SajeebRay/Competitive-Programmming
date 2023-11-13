#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[11];
    gets(str);

    int l = strlen(str);

    if (str[0] == '1' && str[1] == '2' && str[l-2] == 'A')
    {
        str[0] = '0';
        str[1] = '0';
    }
    else if (str[0] == '1' && str[1] == '2' && str[l-2] == 'P' &&
             str[3] == '0' && str[4] == '0' && str[6] == '0' && str[7] == '0')
    {
    }
    else if (str[l-2] == 'A')
    {
    }
    else
    {
        if (str[0] == '1' && str[1] == '2')
        {

        }
        else if ((str[0] == '0') && (str[1] >= '1' && str[1] <= '7'))
        {
            str[0] = '1';
            str[1] = 50 + (str[1] - 48);
        }
        else
        {
            if (str[1] == '0' || str[1] == '1')
            {
                str[0] = '2';
                str[1] = str[1] + 2;
            }
            else
            {
                str[0] = '2';
                str[1] = str[1] - 8;
            }
        }
    }

    for (int i = 0; i < l-2; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
