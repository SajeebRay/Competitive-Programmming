#include<stdio.h>
int main()
{
    int sajeeb[][3] = {1,2,3,4,5,6,7,8,9};
    int *p = sajeeb;

    printf("sajeeb[][3] = {1,2,3,  4,5,6,  7,8,9}\n");

    printf("\n\n%d\n", sajeeb);
    printf("%d\n", &sajeeb[0][0]);
    printf("%d\n", sajeeb[0]);
    printf("%d\n", &sajeeb[0]);
    printf("%d\n", *sajeeb);
    printf("%d\n", **sajeeb);
    printf("%d\n", sajeeb+1);
    printf("%d\n\n", *(sajeeb + 1));

    printf("%d\n", p);
    printf("%d\n", p[0]);
    printf("%d\n", *p);
    printf("%d\n", p+1);
    printf("%d\n", *(p+1));

    printf("\n%d\n", sajeeb[1][1]);
    printf("%d\n", sajeeb[1]);
    printf("%d\n", *sajeeb[1]);
    printf("%d\n", &sajeeb[1]);
    printf("%d\n\n", &sajeeb[1][1]);

    printf("sajeeb[][3] = {1,2,3,  4,5,6,  7,8,9}\n");

    printf("%d\n", (sajeeb+1));
    printf("%d\n", *(sajeeb+1));
    printf("%d\n", *(*(sajeeb+1)+1));
    printf("%d\n", *(sajeeb+1)+1);
    printf("%d\n", (sajeeb+1)+1);

    printf("\n\n%d\n", p);
    printf("%d\n", p+1);
    printf("%d\n", p+3);
    printf("%d\n", *(p+1));
    printf("%d\n", (*(p+1)+1));
    printf("%d\n", *((p+1)+1));
}
