 //binary scarch
#include<stdio.h>

int scarch_array(int ara[], int n, int find);
int main()
{
    int n;
    scanf("%d", &n);

    int arra[10000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }
    int scarch = 10;

    int possition = scarch_array(arra, n, scarch);

    if (possition == -1)
    {
        printf("There is no %d", scarch);
    }
    else
        printf("10 is %dth possition number\n", possition);


    return 0;
}

int scarch_array(int ara[], int n, int find)
{
    int i;
    int mid, left = 0, right = n - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (ara[mid] == find)
        {
            return mid;
        }
        else if (ara[mid] < find)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}
