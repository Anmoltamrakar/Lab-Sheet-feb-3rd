//Q11.A decimal number between 0 and 32 exclusive can be expressed in
//  binary system as x4x3x2x1x0, whwew x1's are either zero or one.
//  Write a C program that accepts (from the termal) a decimal number
//  in the above range and prints out the equivalent binary representation
//  with leading bit 1.
//  Enter a +ve no less than 32:21 Binary
//  equivalent of decimal number 1 is 10101



#include <stdio.h>


int main()

{

    int dec,f,b=0,x=1;

    printf("\n\n\t\tEnter a decimal number\t");

    scanf("%d",&dec);

    int dec1=dec;

    while(dec1!=0)
    {
        f=dec1%2;
        f=f*x;
        b=b+f;
        x=x*10;
        dec1=dec1/2;

    }
    printf("\n\n\t\tBinary equivalent of %d is %d\n\n",dec,b);

    return 0;
}
