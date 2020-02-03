//Q8.Write a C program that calculates the sum of integers between 9 and 300
//  inclusive which are divisible by 7 but not divisible by 63



#include <stdio.h>

int main()
{
        int i,sum=0;

        for(i=9;i<=300;i++)
        {
            if(i%7==0 && i%63!=0)

            sum=sum+i;
        }

            printf("\n\n\t\tthe sum of the number is %d\n\n\n",sum);






    return 0;
}
