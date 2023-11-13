#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char newString[10][10];
    int i,index,line;
       printf("\n\n Split string by space into words :\n");
       printf("---------------------------------------\n");

    printf(" Input  a string : ");
    fgets(str1, sizeof str1, stdin);

    index=0; line=0;
    for(i=0;i<=(strlen(str1));i++)
    {
        // if space or NULL found, assign NULL into newString[line]
        if(str1[i]==' '||str1[i]=='\0')
        {
            newString[line][index]='\0';
            line++;  //for next word
            index=0;    //for next word, init index to 0
        }
        else
        {
            newString[line][index]=str1[i];
            index++;
        }
    }
    printf("\n Strings or words after split by space are :\n");
    for(i=0;i < line;i++)
        printf(" %s\n",newString[i]);
    return 0;
}
