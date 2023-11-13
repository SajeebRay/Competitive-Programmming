#include<stdio.h>
int main()
{
    float salary, Increase ,salaryIncrease;
    scanf("%f",&salary);
    if(0<=salary && salary<=400){
        salaryIncrease = salary + salary * 0.15;
        Increase = salary*0.15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", salaryIncrease, Increase);
    }
    else if(400<salary && salary<=800){
        salaryIncrease = salary + salary * 0.12;
        Increase = salary*0.12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", salaryIncrease, Increase);
    }
    else if(800<salary && salary<=1200){
        salaryIncrease = salary + salary * 0.1;
        Increase = salary*0.1;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", salaryIncrease, Increase);
    }
    else if(1200<salary && salary<=2000){
        salaryIncrease = salary + salary * 0.07;
        Increase = salary*0.07;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", salaryIncrease, Increase);
    }
    else if(2000<salary){
        salaryIncrease = salary + salary * 0.04;
        Increase = salary*0.04;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", salaryIncrease, Increase);
    }
    return 0;
}
