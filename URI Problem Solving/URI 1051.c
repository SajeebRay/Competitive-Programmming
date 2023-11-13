#include<stdio.h>
int main()
{
    float a, b, tax;
    scanf("%f", &a);
    if(a>=0 && a<=2000){
        printf("Isento\n");
    }
    else if(a>2000 && a<=3000){
        b = a - 2000;
        tax = b*.08;
        printf("R$ %.2f\n", tax);
    }
    else if(a>3000 && a<=4500){
        b = a - 3000;
        tax = b*0.18 + 80;
        printf("R$ %.2f\n", tax);
    }
    else if(a>4500 && a<=10392.85){
        b = a - 4500;
        tax = b * 0.28 + 350;
        printf("R$ %.2f\n", tax);
    }
    return  0;
}
