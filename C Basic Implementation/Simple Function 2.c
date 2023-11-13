#include<stdio.h>
int test_function(x)
{
    int y=x;
    x=2*y;
    return (x*y);
}

int main()
{
    int x=10,y=30,z=20;
    z= test_function(x);
    printf("%d %d %d\n",x,y, z);
    return 0;
}
