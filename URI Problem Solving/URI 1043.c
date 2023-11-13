#include<stdio.h>
int main()
{
    float a,b,c,e,s;
    scanf("%f%f%f",&a,&b,&c);
        if(b+c>a && a+b>c && c+a>b){
            s=(a+b+c);
            printf("Perimetro = %.1f\n",s);
        }
        else{
        e=((a+b)*c)/2;
        printf("Area = %.1f\n",e);
        }
    return 0;
}

