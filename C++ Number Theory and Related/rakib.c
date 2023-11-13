#include<stdio.h>
#include<math.h>
int main()
{
    char name[5];
    for(int i = 0; i < 5; i++){
        scanf("%c", &name[i]);
    }
    Naima
    char ch;
    ch = name[0];
    name[0] = name[4];
    name[4] = ch;
    for(int i = 0; i < 5; i++){
        printf("%c", name[i]);
    }
    printf("\n");

    return 0;
}
