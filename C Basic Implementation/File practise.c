/** //basic*/
#include<stdio.h>

int main()
{
    FILE* fileAddress;
    int ch;

    fileAddress = fopen("test.txt", "r");

    if (fileAddress == NULL)
    {
        printf("Not open\n");
    }
    else
    {
        printf("YES, this is open\n");
        while ((ch = fgetc(fileAddress)) != EOF)
        {
            printf("%c", ch);
        }
    }
    fclose(fileAddress);
    return 0;
}
/** //basic write using fputs
#include<stdio.h>
#include<string.h>
int main()
{

    FILE* blank;

    blank = fopen("blank2.txt", "w");
    if (blank == NULL)
    {
        printf("Error Open\n");
    }
    else
    {
        printf("File is open now write\n");

        char str1[10000], str2[100];
        printf("    first write a big string and then small one\n");
        gets(str1);
        gets(str2);

        fputs(str1, blank);
        fputs("\n", blank);
        fputs(str2, blank);

        printf("write successfully\n");
    }

    fclose(blank);
    return 0;
}
*/

/** //write using fputc
#include<stdio.h>
#include<string.h>
int main()
{
    FILE* createNew;

    int get;
    int ch;
    get = fopen("test.txt", "r");

    if (get == NULL)
    {
        printf("nothing is catched\n");
    }
    else
    {
        printf("Folder catched\n");

        while ((ch = fgetc(createNew)) != EOF)
        {
            printf("%c", ch);
        }

    }
    fclose(createNew);
    return 0;

}
*/
