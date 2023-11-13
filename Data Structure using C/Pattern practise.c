/* pattern 1 Number
#include<stdio.h>
int main()
{
    int col, num, row;
    scanf("%d", &num);

    for (col = 1; col <= num; col++)
    {
        row = 1;
        while (row <= col)
        {
            printf("%d ", row);
            row++;
        }

        printf("\n");
    }

    return 0;
}
*/
/* pattern 2
#include<stdio.h>
int main()
{
    int col, num, row;
    scanf("%d", &num);

    for (col = 1; col <= num; col++)
    {
        for (row = 1; row <= col; row++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }

    return 0;
}
*/
/* pattern 3 Binary
#include<stdio.h>
int main()
{
    int col, num, row, rem;
    scanf("%d", &num);

    for (col = 1; col <= num; col++)
    {
        for (row = 1; row <= col; row++)
        {
            rem = row % 2;
            printf("%d ", rem);
        }
        printf("\n");
    }

    return 0;
}
*/
/* pattern 4
#include<stdio.h>
int main()
{
    int col, row, rem, num;
    scanf("%d", &num);

    for (col = 1; col <= num; col++)
    {
        for (row = 1; row <= col; row++)
        {
            rem = col % 2;
            printf("%d ", rem);
        }

        printf("\n");
    }

    return 0;
}
*/
/* pattern 5 Alphabet
#include<stdio.h>
int main()
{
    char col, row, rem, num;
    scanf("%c", &num);

    for (col = 'A'; col <= num; col++)
    {
        for (row = 'A'; row <= col; row++)
        {
            printf("%c ", row);
        }

        printf("\n");
    }

    return 0;
}
*/
/* pattern 6
#include<stdio.h>
int main()
{
    char col, row, rem, num;
    scanf("%c", &num);

    for (col = 'A'; col <= num; col++)
    {
        for (row = 'A'; row <= col; row++)
        {
            printf("%c ", col);
        }

        printf("\n");
    }

    return 0;
}
*/
/* pattern 7 Number again
#include<stdio.h>
int main()
{
    char col, row, rem, num;
    scanf("%d", &num);

    for (col = num; col >= 1; col--)
    {
        for (row = 1; row <= col; row++)
        {
            printf("%d ", row);
        }

        printf("\n");
    }

    return 0;
}
*/
/* pattern 8 Floyd's triangle
#include<stdio.h>
int main()
{
    char col, row, rem, num;
    scanf("%d", &num);

    for (col = 1; col <= num; col++)
    {
        for (row = 1; row <= col; row++)
        {
            rem++;
            printf("%d ", rem);
        }

        printf("\n");
    }

    return 0;
}
*/
/* pattern 9 Number model
#include<stdio.h>
int main()
{
    int col, num, row;
    scanf("%d", &num);

    for (col = 1; col <= num; col++)
    {
        row = 1;
        while (row <= col)
        {
            printf("%d ", row);
            row++;
        }

        printf("\n");
    }
    for (col = (num-1); col >= 1; col--)
    {
        row = 1;
        while (row <= col)
        {
            printf("%d ", row);
            row++;
        }

        printf("\n");
    }


    return 0;
}
*/
/* pattern 10
#include<stdio.h>
int main()
{
    int col, num, row;
    scanf("%d", &num);

    for (col = 1; col <= num; col++)
    {
        row = 1;
        while (row <= col)
        {
            printf("*");
            row++;
        }

        printf("\n");
    }
    for (col = (num-1); col >= 1; col--)
    {
        row = 1;
        while (row <= col)
        {
            printf("*");
            row++;
        }

        printf("\n");
    }


    return 0;
}
*/
/* pattern 11 Triangle
#include<stdio.h>
int main()
{
    int i, num, j;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num-i; j++)
        {
            printf("  ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
*/
/* pattern 12 piramid
#include<stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (n - i); j++)
        {
            printf("  ");
        }
        for (j = i; j < i+i; j++)
        {
            printf("%d ", j);
        }
        for (j = (i+i -2); j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
*/
   // The mission extreme
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int k;
    for (int i = n; i > 1; i--)
    {
        for (int j = n, k = i; k < n; j--, k++)
        {
            printf("%d ", j);
        }
        for (int j = i; j > 0; j--)
        {
            printf("%d ", i);
        }
        for (int j = i-1; j > 0; j--)
        {
            printf("%d ", i);
        }
        for (int j = i, k = i; k < n; j++, k++)
        {
            printf("%d ", j+1);
        }
        printf("\n");
    }


    for (int i = 1; i <= n; i++)
    {
        for (int j = n-1; j >= i; j--)
        {
            printf("%d ", j+1);
        }
        for (int j = i; j > 0; j--)
        {
            printf("%d ", i);
        }
        for (int j = i-1; j > 0; j--)
        {
            printf("%d ", i);
        }
        for (int j = i-1, k = i; k < n; k++, j++)
        {
            printf("%d ", j+2);
        }
        printf("\n");
    }

    return 0;
}

