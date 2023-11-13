#include<stdio.h>
int main()
{
    float A,B,C,R1,R2,D,E;
    scanf("%f%f%f",&A,&B,&C);
    D=(B*B)-4*A*C;
    E=2*A;
    if(D<0||E==0){
        printf("Impossivel calcular\n");
    }
    else{
        R1=(-B+(sqrt(D)))/E;
        R2=(-B-(sqrt(D)))/E;
        printf("R1 = %.5f\nR2 = %.5f",R1,R2);
    }
    return 0;

}

