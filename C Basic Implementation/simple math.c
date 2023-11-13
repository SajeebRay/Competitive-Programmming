#include<stdio.h>
int main()
{
    float A,B,C;
    float pi=3.14159,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%f%f%f",&A,&B,&C);
    TRIANGULO = .5*A*C;
    CIRCULO = pi*(C*C);
    TRAPEZIO = .5*(A+B)*C;
    QUADRADO = B*B;
    RETANGULO = A*B;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nORETANGULO: %.3f\n",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);
    return 0;
}
