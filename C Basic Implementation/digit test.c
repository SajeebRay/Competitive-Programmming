#include<stdio.h>
int main()
{
char chr;
scanf("%c", &chr);
if(chr>='0' && '9'>=chr) {
printf("digit\n");
}
else{
    printf("Others\n");
}
return 0;
}
