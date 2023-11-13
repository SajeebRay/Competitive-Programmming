#include <stdio.h>

int main()
{
    char *day1, *day2, *s, *a, *j, *e;
    int d1, d2, h1, h2, m1, m2, s1, s2, total, rem1, rem2, rem3;

    scanf("%s %d", &day1, &d1);
    scanf("%d %s %d %s %d", &h1, &s, &m1, &a, &s1);

    scanf("%s %d", &day2, &d2);
    scanf("%d %s %d %s %d", &h2, &j, &m2, &e, &s2);

    total = (d2-d1) * 24*60*60 + (h2-h1) * 60*60 + (m2-m1) * 60 + (s2-s1);

    rem1 = total % (24*60*60);
    rem2 = rem1 % (60*60);
    rem3 = rem2 % 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", total / (24*60*60), rem1 / (60*60), rem2 / 60, rem3 );

    return 0;
}
