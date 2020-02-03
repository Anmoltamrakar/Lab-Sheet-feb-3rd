//Q10.What is the distance between Kathmandu (27.7172'N,85.3240'E)
//  and Pokhara (28.2096'N,83.9856'E)? Use the Euclidean distance formula
//  to get an approximate value.




#include<stdio.h>



int main()
{
    float a,b,c,d;
    printf("\n\n\t\tEnter the N points of ktm\t");
    scanf("%f",&a);

    printf("\n\n\t\tEnter the E  points of ktm\t");
    scanf("%f",&b);

    printf("\n\n\t\tEnter the N points of pkr\t");
    scanf("%f",&c);

    printf("\n\n\t\tEnter the E points of ktm\t");
    scanf("%f",&d);


    float x;

    x=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    printf("\n\n\t\tThe distance is %f\n\n",x);


    return 0;


}

