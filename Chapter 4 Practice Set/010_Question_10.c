#include <stdio.h>

int main()
{
    // Question :-
    /* Repeat 7 using do while loop.*/

    int sum = 0, process = 1;

    do
    {
        int result = process * 8;
        process++;
        sum += result;
    } while (process <= 10);
    printf("The sum of numbers occuring in table of 8 is %d", sum);

    return 0;
}