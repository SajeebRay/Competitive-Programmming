#include<stdio.h>
int main()
{
    int Last_digit_of_phone_number[20] = {10,11,11,22,33,21,23,32,21,32,21,23,21,32,22,25,31,15,25,22};
    int i, number_count[101];

    for(i=0;i<=100;i++){
        number_count[i]= 0;
    }

    for(i=0;i<20;i++);{
        number_count[Last_digit_of_phone_number[i]]++;
    }

    for(i=0;i<=100;i++){
        printf("Last Digit: %d\tCount: %d\n",i,number_count[i]);
    }

    return 0;
}
