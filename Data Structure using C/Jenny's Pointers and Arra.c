#include<stdio.h>
int main()
{
    int *p, i, sajeeb[] = {1, 2,3,4,5,6,7,8,9,10};

    p = sajeeb;

    printf("1, 2,3,4,5,6,7,8,9,10\n");

    // %d = integer form, AND  %p = hexa dechimal form
    // adress should be stored in memory in hexa-decimal form

    printf("\n%d\n", sajeeb);
    printf("%d\n", &sajeeb);
    printf("%d\n", sajeeb +  2);
    printf("%d\n", *sajeeb);
    printf("%d\n", *(sajeeb + 2));
    printf("%d\n", *sajeeb + 2);
    printf("%d\n", sajeeb[3]);
    printf("%d\n\n", 3[sajeeb]);

    printf("%d\n", p);
    printf("%d   look the deference\n", &p);
    printf("%d\n", p + 2);
    printf("%d\n", *p);
    printf("%d\n", *(p + 2));
    printf("%d\n", *p + 2);
    printf("%d\n", p[3]);
    printf("%d\n", 3[p]);

    return 0;
}
