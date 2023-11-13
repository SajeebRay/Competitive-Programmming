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
    unsigned long long int arr[5], total = 0, max = 0, min = 1000000000;

    for (int i = 0; i < 5; i++)
    {
        scanf("%llu", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        total += arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("%llu %llu", total - max, total - min);


}

