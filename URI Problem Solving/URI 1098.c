#include<stdio.h>
int main()
{

    int I, J;
    float A, B;

    for (J = 1; J <=3; J++)
    {
        printf("I=0 J=%d\n", J);
    }

    for (B = 1.2; B <= 4; B++)
    {
        printf("I=0.2 J=%.1f\n", B);
    }
    for (B = 1.4; B <= 4; B++)
    {
        printf("I=0.4 J=%.1f\n", B);
    }
    for (B = 1.6; B <= 4; B++)
    {
        printf("I=0.6 J=%.1f\n", B);
    }
    for (B = 1.8; B <= 4; B++)
    {
        printf("I=0.8 J=%.1f\n", B);
    }
    for (B = 2; B <= 4; B++)
    {
        printf("I=1 J=%.0f\n", B);
    }

    for (B = 2.2; B <= 5; B++)
    {
        printf("I=1.2 J=%.1f\n", B);
    }
    for (B = 2.4; B <= 5; B++)
    {
        printf("I=1.4 J=%.1f\n", B);
    }
    for (B = 2.6; B <= 5; B++)
    {
        printf("I=1.6 J=%.1f\n", B);
    }
    for (B = 2.8; B <= 5; B++)
    {
        printf("I=1.8 J=%.1f\n", B);
    }

    for (B = 3; B <= 5; B++)
    {
        printf("I=2 J=%.0f\n", B);
    }



    return 0;
}






