#include <stdio.h>
int main()
{
    int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,62, 66, 76, 70, 67, 65, 77, 63};
    int i,count_marks[101];

    for(i=0;i<=100;i++){
        count_marks[i]=0;
    }

    for(i=0;i<40;i++){
        count_marks[total_marks[i]]++;
    }

    for(i=50;i<=100;i++){
        printf("Marks: %d\tCount: %d\n",i,count_marks[i]);
    }

    return 0;
}
