/** This is begginig of my data structure **/
/** Author: Sajeeb Kumar Ray **/

#include<stdio.h>
int main()
{
    int sajeeb[50], size, i, position, value, choise, del_position;

    printf("Print the size of a ara... ");
    scanf("%d", &size);
    if (size > 49)
    {
        printf("Enter invalid\n");
        exit(0);
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            scanf("%d", &sajeeb[i]);
        }
        for (i = 0; i < size; i++)
        {
            printf("Arra you declared...\n%d\n", sajeeb[i]);
        }
    }

    /*************** next insert *************************/

    printf("\nEnter the input position... ");
    scanf("%d", &position);

    if (size < position || position < 1)
    {
        printf("Impossible to insert\n");
        exit(0);
    }
    else if (size == position)
    {
        printf("Enter the value... ");
        scanf("%d", &value);

        sajeeb[position] = value;
    }

    else
    {
        printf("Enter the value... ");
        scanf("%d", &value);

        for (i = (size-1); i >= (position-1); i--)
        {
            sajeeb[i+1] = sajeeb[i];
        }
        sajeeb[position-1] = value;
    }


    size++;
    printf ("%d is now length\n", size);

    for (i = 0; i < size; i++)
    {
        printf("Arra you declared the position %d is... %d\n",i+1, sajeeb[i]);
    }

    /********************************** deletion ***********************************/

    printf("\n\n  If you want to delete press '1' OR press '2'\n");
    scanf("%d", &choise);

    switch(choise)
    {
    default:
    {
        printf("Invalid\n");
        break;
    }

    case 1:
    {
        printf("Enter the position you need to delete.\n");
        scanf("%d", &del_position);

        if (del_position > size || del_position <= 0)
        {
            printf("Invalid position\n");
            exit(0);
        }

        else if (del_position == size)
        {
            size--;
            printf("%d is now length\n", size);

            for (i = 0; i < size; i++)
            {
                printf("Arra you declared the position %d is... %d\n",i+1, sajeeb[i]);
            }
        }

        else
        {
            for (i = (del_position - 1); i < size; i++)
            {
                sajeeb[i] = sajeeb[i+1];
            }

            size--;
            printf("%d is now length\n", size);

            for (i = 0; i < size; i++)
            {
                printf("Arra you declared the position %d is... %d\n",i+1, sajeeb[i]);
            }
        }

        break;
    }

    case 2:
    {
        printf("Ok\n");
        exit(0);
    }

    }


    return 0;
}
