#include<stdio.h>
int main()
{
    int X, Y, i, temp;
    scanf("%d %d", &X, &Y);

    if (X > 0 && 0 < Y)
    {
        if (Y < X)
        {
            temp = X;
            X = Y;
            Y = temp;
        }
        for (i = X; i <= Y; i++)
        {
            if (i % 5 == 2 || i % 5 == 3)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}


#include<stdio.h>
int main(){
    int X, Y, i;
    scanf("%d%d", &X,&Y);
    if (X > Y) {
         for (i = Y+1 ; i < X; i++) {
                if (i % 5 == 2 || i % 5 == 3) {
                    printf("%d\n", i);
                }
            }
    }else if(X < Y){
        for (i = X+1 ; i < Y; i++) {
                if (i % 5 == 2 || i % 5 == 3) {
                     printf("%d\n", i);
                }
            }
    }

}
