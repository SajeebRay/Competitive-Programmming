#include<stdio.h>
int main()
{
    int i;
    int marks[] = {6,7,4,6,9,7,6,2,4,3,4,1};
    int count[11];

    for(i=0;i<11;i++){
        count[i]=0;
    }

    for(i=0;i<12;i++){
        count[marks[i]]=count[marks[i]]+1;
    }
    for(i=1;i<=10;i++){
        printf("marks: %d\tcount: %d\n",i,count[i]);
    }

    return 0;
}
