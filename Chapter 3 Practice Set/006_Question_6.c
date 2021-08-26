#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to check whether a number is even 
       or odd. Take number as input from user.*/

    int number;
    printf("Enter a number :-\n");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d is an even number.", number);
    }
    else
    {
        printf("%d is an odd number.", number);
    }

    return 0;
}