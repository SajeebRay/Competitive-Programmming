#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int insertionSort(int arra[], int n)
{
    int i, j;
    int temp, count = 0, t;
    for (i = 0; i < n; i++)
    {
        temp = arra[i];
        for (j = i-1; j >= 0; j++)
        {
        	printf("%d yes\n", i);
            if (temp < arra[j])
            {
                t = temp;
                temp = arra[j];
                arra[j] = t;
                count++;
            }
        }
        printf("%d", count);
        //temp = arra[0];
    }

    return count;
}
int main()
{
    int i, j;
    int time;
    scanf("%d", &time);

    for (i = 0; i < time; i++)
    {
        int n;
        scanf("%d", &n);
        int *arra;
        arra = (int*)malloc(n * sizeof(int));

        for (j = 0; j < n; j++)
        {
            scanf("%d", &arra[j]);
        }

        int value = insertionSort(arra, n);

        printf("%d\n", value);
    }
    return 0;
}

