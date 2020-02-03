//Q9.Write a C program that accepts an integer from keyboard and calculates
//  the sum of digits of an integer

#include <stdio.h>

int main()

{


    int i,i1,i2,sum=0;

    printf("\n\n\t\tEnter the integer");
    scanf("%d",&i);


    i1=i;

    while(i1!=0)
    {
        i2=i1%10;
    sum=sum+i2;
    i1=i1/10;

    }
    printf("\n\n\t\tthe sum of the digits is %d\n\n",sum);





    return 0;


}
