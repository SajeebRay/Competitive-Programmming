/*
#include<stdio.h>
#include<iso646.h>

int main()
{
    unsigned int number1, number2, sum = 0, carry = 0,
     new_number = 0, number = 0, n1 = 0, n2 = 0, tempN1 = 0, tempN2 = 0;
    int l = 0, k = 0, j = 0, i = 0;

    while (l < 2)
    {
        sum = 0, carry = 0;
        new_number = 0, number = 0, n1 = 0, n2 = 0, tempN1 = 0, tempN2 = 0;
        k = 0, j = 0, i = 0;

        scanf("%u %u", &number1, &number2);

        while ((number1 != 0) or (number2 != 0))
        {
            if (number1 != 0)
            {
            tempN1 = number1 % 2;
            n1 += tempN1 * pow(10, k);

        }
        if (number2 != 0)
        {
            tempN2 = number2 % 2;
            n2 += tempN2 * pow(10, k);
        }

        k++;
        number1 = number1 / 2;
        number2 = number2 / 2;
    }
    printf("number1 %u\n", n1);
    printf("number2 %u\n", n2);

    while ((n1 != 0) or (n2 != 0))
    {
        if ((n1%10 == 0) and (n2%10 == 0) and (carry%10 == 0))
        {
            sum = 0;
            carry = 0;
        }
        else if ((n1%10 == 1) and (n2%10 == 0) and (carry%10 == 0))
        {
            sum = 1;
            carry = 0;
        }
        else if ((n1%10 == 0) and (n2%10 == 1) and (carry%10 == 0))
        {
            sum = 1;
            carry = 0;
        }
        else if ((n1%10 == 0) and (n2%10 == 0) and (carry%10 == 1))
        {
            sum = 1;
            carry = 0;
        }
        else if ((n1%10 == 0) and (n2%10 == 0) and (carry%10 == 1))
        {
            sum = 1;
            carry = 0;
        }
        else if ((n1%10 == 1) and (n2%10 == 1) and (carry%10 == 0))
        {
            sum = 0;
            carry = 1;
        }
        else if ((n1%10 == 1) and (n2%10 == 1) and (carry%10 == 1))
        {
            sum = 1;
            carry = 1;
        }

        new_number = new_number + sum * pow(10, i);

        i++;
        n1 = n1/10;
        n2 = n2/10;
    }

    // if you want to see right ans close this comment
    /*if (carry == 1)
    {
        new_number += pow(10, i);
    }*

    printf("sum %u\n", new_number);

    while(new_number > 0)
    {
        if (new_number % 10== 1)
        {
            number += pow(2, j);
        }
        j++;
        new_number = new_number / 10;
    }
    printf("sum %d\n", number);

        l++;
    }

    return 0;
}
*/
#include<stdio.h>
int main()
{
    unsigned long  int a,b,c;
    int i= 0;
    while(i <2)
    {
        scanf("%lu %lu",&a,&b);
        c = (a^b);
        printf("%lu\n",c);
        i++;
    }
    return 0;
}

