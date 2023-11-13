#include<stdio.h>
int main(){

    int marks;
    char grade;
    printf("Enter your marks\n");
    scanf("%d", &marks);
    if(marks>=80){
        grade='A+';
        printf("your grade is %c\n", grade);
    }
    else if(marks>=70){
        grade='A';
        printf("your grade is %c\n", grade);
    }
    else if(marks>=60){
        grade='A-';
        printf("your grade is %c\n", grade);
    }
    else if(marks>=50){
        grade='C';
        printf("your grade is %c\n", grade);
    }
    else if(marks>=40){
        grade='D';
        printf("your grade is %c\n", grade);
    }
    else {
        printf("You are fail. Please try next time\n);
    }
    return 0;
}
