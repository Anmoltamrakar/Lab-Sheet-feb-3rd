//Q12.Write a C program that accepts integers from the keyboard until
//  we enter a zero or a -ve number. The program will output the number
//  of positive values entered, the minimum value, the maximum value
//  the maximum value and the average of all numbers.


#include <stdio.h>
int main()
{
    int nums[1000];

    int num, count = 0,a;

    printf("\nEnter a number :\n");
    scanf("%d", &num);

    nums[count] = num;

    while(1)

    {
        printf("\nEnter another number :\n");
        scanf("%d", &num);

        if (num <= 0)
            break;

        count++;

        nums[count] = num;

    }

    int max = nums[0], min = nums[0];
    float avg = 0;

    for( a = 0; a <= count; a++)
    {
        if (max < nums[a])
            max = nums[a];

        if (min > nums[a])
            min = nums[a];

        avg += nums[a];
    }

    count++;

    avg /= count;

    printf("\n\nMaximum number = %d\n", max);
    printf("\nMinimum number = %d\n", min);
    printf("\nAverage of all numbers = %f\n\n\n\n", avg);


    return 0;
}

