
#include<stdio.h>
int main()
{
    int choice, num, n, n1, r, i, fact, sum = 0;
    float temp, tempResult;

    while(1)
    {
        printf("\t\tMAIN MENU\nWhat do you want?\n\a");
        printf("Converter (1)\tOR\tNumber identifier (2)\n");
        printf("ENTER YOUR CHOISE: ");
        scanf("%d", &choice);

        switch(choice) //main switch
        {
        default:
            printf("Invalid expectation. Try again...\n\n", tempResult);
            break;

        case 1:
            printf("\nFarhenheight to Celcious 1\n");
            printf("Celcious to farhenheight 2\n");
            printf("ENTER YOUR CHOISE: ");
            scanf("%d", &choice);

            switch(choice) //converter switch
            {
            default:
                printf("Invalid expectation. Try again...\n\n", tempResult);

            case 1:
                printf("Enter farhenheight value: \n");
                scanf("%f", &temp);

                tempResult =(temp - 32) * 5 / 9;
                printf("Convert result: %.2f\n\n", tempResult);

                sleep(1);
                printf("\tThank you (SAJEEB)\a\n\t\tWhat next\n");
                break;

            case 2:
                printf("Enter the celcious value: \n");
                scanf("%f", &temp);

                tempResult = temp * 1.8 + 32;
                printf("Convert result: %.2f\n\n", tempResult);

                sleep(1);
                printf("\tThank you (SAJEEB)\a\n\t\tWhat next\n");
                break;

            }

            break;


        case 2:

            printf("\nFor reverse number, press: 1\n");
            printf("For palindrome number, press: 2\n");
            printf("For total of the number, press: 3\n");
            printf("For couting number, press: 4\n");
            printf("For armstrong number, press: 5\n");
            printf("For strong number, press: 6\n");
            printf("ENTER YOUR CHOISE: ");

            scanf("%d", &choice);



            switch(choice) //number identifier switch
            {
            default:
                printf("Invalid expectation. Try again...\n\n", tempResult);
                break;

            case 1:
                printf("Enter your number: \n");
                scanf("%d", &num);
                n = num;

                while(n != 0) //reverge number
                {
                    n1 = n/10;
                    r = n % 10;
                    n = n1;
                    sum = sum *10 + r;

                }

                sum = abs(sum);
                printf("Reverse is: %d\n", sum);

                sleep(1);
                printf("\tThank you (SAJEEB)\a\n\t\tWhat next\n\n\n");
                break;

            case 2:
                printf("Enter your number: \n");

                scanf("%d", &num);
                n = num;

                while(n != 0) //palindrome
                {
                    n1 = n/10;
                    r = n % 10;
                    n = n1;
                    sum = sum *10 + r;

                }
                if (sum == num)
                {
                    printf("This is palindrome.\n");
                }
                else
                {
                    printf("This is not palindrome.\n");
                }

                sleep(1);
                printf("\tThank you (SAJEEB)\a\n\t\tWhat next\n");
                break;

            case 3:
                printf("Enter your number: \n");

                scanf("%d", &num);
                n = num;

                while(n != 0)//total of a number
                {
                    n1 = n/10;
                    r = n % 10;
                    n = n1;
                    sum = sum + r;
                }

                sum = abs(sum);
                printf("Sum: %d\n", sum);

                sleep(1);
                printf("\tThank you (SAJEEB)\a\n\t\tWhat next\n");
                break;

            case 4:
                printf("Enter your number: \n");

                scanf("%d", &num);
                n = num;

                while(n != 0) //counting number
                {
                    n1 = n/10;
                    r = n % 10;
                    n = n1;
                    sum = sum + 1;

                }

                sum = abs(sum);
                printf("Count: %d\n", sum);

                sleep(1);
                printf("\tThank you (SAJEEB)\a\n\t\tWhat next\n");
                break;

            case 5:
                printf("Enter your number: \n");

                scanf("%d", &num);
                n = num;

                while(n != 0) //armstrong
                {
                    n1 = n/10;
                    r = n % 10;
                    n = n1;
                    sum = sum + r*r*r;

                }
                if (sum == num)
                {
                    printf("This is Armstrong.\a\n");
                }
                else
                {
                    printf("This is not Armstrong.\a\n");
                }

                sleep(1);
                printf("\tThank you (SAJEEB)\a\n\t\tWhat next\n");
                break;

            case 6:
                printf("Enter your number: \n");

                scanf("%d", &num);
                n = num;

                while(n != 0) //strong number
                {
                    n1 = n/10;
                    r = n % 10;
                    n = n1;
                    fact = 1;

                    for (i = 1; i <= r; i++)
                    {
                        fact = fact * i;

                    }
                    sum = sum + fact;
                }

                if (sum == num)
                {
                    printf("This is Strong.\n");
                }
                else
                {
                    printf("This is not Strong.\n");
                }

                sleep(1);
                printf("\tThank you (SAJEEB)\a\n\t\tWhat next\n");
                break;
            }

            break;
        }
    }

    return 0;
}

    First PROJECT

        Nothing Serious

    THANKS FOR WATCHING
