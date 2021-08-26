#include <stdio.h>

int main()
{
    // Question :-
    /*Write a program to sum the first ten 
    natural numbers using a while loop.*/
    
    int num = 10, process = 1 , sum = 0;

    while (process <= num)
    {
        sum += process;
        process++;
    }
    printf("The sum of first 10 natural numbers is %d.", sum);

    return 0;
}