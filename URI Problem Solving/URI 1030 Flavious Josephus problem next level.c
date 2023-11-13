
#include <stdio.h>
int main()
{
    int saj[15], n, temp, i = 0, count = 0, temp2, number = 0;

    while ((scanf("%d", &n) == 1) && n <= 10000 && n >= 0)
    {
        i = 0, count = 0, number = 0;

        while (n > 0)
        {
            if (n != 0)
            {
                temp = n % 2;
                saj[i] = temp;
            }

            i++;
            count++;
            n = n/2;
        }

        temp2 = saj[count-1];
        for (i = count-1; i >= 0; i--)
        {
            saj[i] = saj[i-1];
        }
        saj[0] = temp2;

        for (i = count-1; i >= 0; i--)
        {
            number += saj[i] * pow(2, i);
        }
        printf("%d\n", number);
    }
    return 0;
}
