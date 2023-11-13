#include<stdio.h>
int main()
{
    int number[]={1,5,7,9,11,15,19,25,26,28,30,35,36,39,40};
    int mid,num=30;
    int large_number=14;
    int small_number=0;
    while(small_number<large_number){
        mid=large_number+small_number/2;
        if(num==number[mid]){
            break;
        }
        else if(num>number[mid]){
            small_number=mid+1;
        }
        else{
            large_number=mid-1;
        }
    }
    if(small_number>large_number){
        printf("The number is not in the list");
    }
    else{
        printf("%d is found in the list. And that was %dth number\n",num,mid);
    }
    return 0;
}
