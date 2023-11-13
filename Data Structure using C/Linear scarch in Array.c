#include<stdio.h>
int main()
{
    int i, n,5 present = 0, sajeeb[20] = {1, 3,3,55,5,88,88,888,-55,-88,446,5,56,56};
    scanf("%d", &n);

    for(i = 0; i < 20; i++)
    {
        if (sajeeb[i] == n)
        {
            present++;
            printf("%d is %dth number\n", n, i+1);
        }
    }

    if (present == 0)
    {
        printf("your choise is not in the list\n");
    }
    return 0;
}
