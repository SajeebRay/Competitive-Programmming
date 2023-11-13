#include<stdio.h>
double Find_average(double age[], double n);
int main()
{
    double age[]={579,859,899,56,56,89,23,56,45,89};
    int n=10;
    double Average;
    Average=Find_average(age,n);
    printf("Average: %lf\n", Average);
    return 0;
}
double Find_average(double age[],double n)
{
    int i,sum=0;
    double avarage;
    for(i=0;i<n;i++){
        sum=sum+age[i];
    }
    avarage=sum/n;
    return avarage;
}
