#include<stdio.h>
int main()
{
    char c1[]="vertebrado", c11[]="ave", c12[]="mamifero";
    char c111[]="carnivoro", c112[]="onivoro", c124[]="herbivoro";

    char a1[]="aguia", a2[]="pomba", a3[]="homem", a4[]="vaca";

    char c2[]="invertebrado", c21[]="inseto", c22[]="anelideo";
    char c211[]="hematofago";

    char a5[]="pulga", a6[]="lagarta", a7[]="sanguessuga", a8[]="minhoca";

    char ch1[15], ch2[16], ch3[15];

    scanf("%s %s %s", &ch1, &ch2, &ch3);

    if(strcmp(ch1, c1) == 0)
    {
        if(strcmp(ch2, c11) == 0)
        {
            if(strcmp(ch3, c111) == 0)
            {
                printf("%s\n", a1);
            }
            else if(strcmp(ch3, c112) == 0)
            {
                printf("%s\n", a2);
            }
        }
        else if(strcmp(ch2, c12) == 0)
        {
            if(strcmp(ch3, c112) == 0)
            {
                printf("%s\n", a3);
            }
            else if(strcmp(ch3, c124) == 0)
            {
                printf("%s\n", a4);
            }
        }
    }
    else if(strcmp(ch1, c2) == 0)
    {
        if(strcmp(ch2, c21) == 0)
        {
            if(strcmp(ch3, c211) == 0)
            {
                printf("%s\n", a5);
            }
            else if(strcmp(ch3, c124) == 0)
            {
                printf("%s\n", a6);
            }
        }
        else if(strcmp(ch2, c22) == 0)
        {
            if(strcmp(ch3, c211) == 0)
            {
                printf("%s\n", a7);
            }
            else if(strcmp(ch3, c112) == 0)
            {
                printf("%s\n", a8);
            }
        }

    }

    return 0;
}
