#include <stdio.h>

int main()
{
    // Question :-
    /* Write a program to calculate the sum of 
    the numbers occurring in the multiplication table of 8.
    (Consider 8x1 to 8x10)*/

    int sum = 0;

    for (int process = 1; process <= 10; process++)
    {
        int result = process * 8;
        sum += result;
    }
    printf("The sum of numbers occuring in table of 8 is %d", sum);

    return 0;
}