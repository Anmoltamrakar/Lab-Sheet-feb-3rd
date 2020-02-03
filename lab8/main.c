//Q14.You are a system administratrator of a popular website.
//  As a precautation, you want your users to have a strong password.
//  Write a program that tells the user if the password is strong
//  or not. A strong passward is at least six characters that contains both uppercase
//  and lowercase letters, at least one number and at least one symbol
//  (@,#,$,%,etc.).



#include <stdio.h>


int c_number(char password[]);
int c_symbol(char password[]);

int x;

int main()

{
    char password[25];

    printf("\n\n\t\tEnter the password :\n");
    gets(password);

    if (c_number(password) && c_symbol(password) && strlen(password) >= 6)
       {

        printf("\n\n\t\tThe password is Strong.\n");
    }

     else
    {
        printf("\n\n\t\tThe password is not Strong.\n");
    }

    return 0;
}

int c_number(char password[])

{
    for (x = 0; x < strlen(password); x++)
    {
        if(password[x] >= '1' && password[x] <= '9')
        {
            return 1;
        }
    }

    return  0;
}

int c_symbol(char password[])
{
    for (x = 0; x < strlen(password); x++)
    {
        password[x] = tolower(password[x]);
        if (!((password[x] >= '1' && password[x] <= '9') || (password[x] >= 'a' && password[x] <= 'z')))
        {
            return 1;
        }
    }

    return 0;
}

