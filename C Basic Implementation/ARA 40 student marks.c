#include <stdio.h>
int main()
{
    double ft_marks[20],
    st_marks[20],
    final_marks[20];

    int i,count,total_marks[20],marks,marks2,count2;
    for(i=0;i<20;i++){
        printf("Enter first & second Term Marks than final marks of Roll %d : \n",i+1);
        scanf("%lf%lf%lf",&ft_marks[i],&st_marks[i],&final_marks[i]);
    }

    for(i=0;i<20;i++){
        total_marks[i] = ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;

    }

    for(i=1;i<=20;i++){
        printf("ROLL NO: %d\tTotal Marks: %d\n",i,total_marks[i-1]);

    }

    printf("\n");

    for(marks=1;marks<=100;marks++){
        count=0;
            for(i=1;i<20;i++){
                if (total_marks[i] == marks){
                    count++;
                }
            }

        printf("Marks: %d\tCount: %d\n",marks,count);
    }

    printf("\n");

    for(marks2=10;marks2<=100;marks2=marks2+10){
        count2=0;
        for(i=0;i<20;i++){
            if(total_marks[i]==marks2){
                count2++;
            }
        }
        printf("Marks-10: %d\tcount: %d\n",marks2,count2);
    }
    for(i=0;i<20;i++){
        if(total_marks[i]>49&&total_marks[i]<=60){
            printf("Roll NO: %d\tTotal Marks: %d\n",i+1,total_marks[i]);
        }
    }

    for(i=0;i<20;i++){
        if(total_marks[i]>59&&total_marks[i]<=70){
            printf("Roll nO: %d\tTotal Marks: %d\n",i+1,total_marks[i]);
        }
    }
    for(i=0;i<20;i++){
        if(total_marks[i]>69&&total_marks[i]<=80){
            printf("Roll nO: %d\tTotal Marks: %.d\n",i+1,total_marks[i]);
        }
    }
    for(i=0;i<20;i++){
        if(total_marks[i]>79&&total_marks[i]<=90){
            printf("Roll nO: %d\tTotal Marks: %d\n",i+1,total_marks[i]);
        }
    }

    for(i=0;i<20;i++){
        if(total_marks[i]>89&&total_marks[i]<=100){
            printf("Roll nO: %d\tTotal Marks: %d\n",i+1,total_marks[i]);
        }
    }

    return 0;
}
