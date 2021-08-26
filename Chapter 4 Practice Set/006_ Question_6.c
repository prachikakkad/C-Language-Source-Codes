#include <stdio.h>

int main()
{
    // Question :-
    /* Write a program to implement program
     5 using for and do-while loop.*/

    int num = 10, process = 1, sum = 0;

    do
    {
        sum += process;
        process++;
    } while (process <= num);
    printf("The sum of first 10 natural numbers is %d.", sum);

    return 0;
}