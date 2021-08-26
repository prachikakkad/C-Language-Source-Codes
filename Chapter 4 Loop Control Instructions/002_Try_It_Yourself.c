#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to print natural numbers from 
    10 to 20 when initial loop counter is initialized to 0.
    The loop counter need not to be int, it can be
    float as well ! */

    int num = 0;

    while (num <= 20)
    {
        if (num >= 10)
        {
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}