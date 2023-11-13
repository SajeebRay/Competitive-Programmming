#include<stdio.h>
int find_sum(int income[],int n);
int main()
{
    int n=20, income[]={21,23,65,56,32,56,45,25,35,16,35,56,84,65,56,23,56,61,23};
    int SUM;
    SUM=find_sum(income, n);
    printf("Sum: %d\n",SUM);
    return 0;
}
int find_sum(int income[],int n)
{
    int i,sum;
    sum=0;
    for(i=1;i<n;i++){
        sum=sum+income[i];
    }
    return sum;
}
