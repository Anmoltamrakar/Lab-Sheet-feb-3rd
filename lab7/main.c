//Q13.Write a C program that accepts a nonnegative integer from the keyboard
//  and checks weather the entered number is a Armstrong number.(An n-digit
//  number that is the sum of the n-th powers its digits is called an Armstrong
//  number).For example 9 and 1634 are Armstrong number.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num = -1;

    while(num < 0)
    {
        system("cls");

        printf("\n\n\t\tEnter a positive integer :\n");
        scanf("%d", &num);
    }

    int a = num, d[100], n_digits = 0, sum = 0,x;


    while (a != 0)
        {
            d[n_digits] = a % 10;
            n_digits++;
            a /= 10;
        }


        for ( x = 0; x < n_digits; x++)
        {
            sum += pow(d[x],n_digits);
        }

    if (sum == num)
    {
        printf("\n\n\t\t%d is an Armstrong number.\n\n", num);

    }

    else
    {

        printf("\n\n\t\t%d is not an Armstrong number.\n\n", num);
    }


    return 0;
}

