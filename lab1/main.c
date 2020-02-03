//Q1.What would the equivalent code,using a while loop,
//  be for the example
//  for(i=0;i<10;i=i+1)
//  printf("i is %d\n",i);



#include <stdio.h>

int main()
{


    int i=0;
    while(i<10)
    {
        printf("i is %d\n",i);
        i =i+1;

    }

    return 0;
}
