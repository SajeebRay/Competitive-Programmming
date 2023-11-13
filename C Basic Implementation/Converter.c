#include<stdio.h>

int main()
{
    int choice;
    float temp, tempResult;

    while(1)
    {

        printf("Menu\nFarhenheight to Celcious : 1\n");
        printf("Celcious to farhenheight : 2\n");
        printf("ENTER YOUR CHOISE: \n");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("Enter farhenheight value: \n");
            scanf("%f", &temp);
            tempResult =(temp - 32) * 5 / 9;
            printf("Convert result: %.2f\n\n", tempResult);
            break;

        case 2:
            printf("Enter the celcious value: \n");
            scanf("%f", &temp);
            tempResult = temp * 1.8 + 32;
            printf("Convert result: %.2f\n\n", tempResult);
            break;

        default:
            printf("Invalid aspectation.\n\n", tempResult);
        }

    }

    return 0;
}
