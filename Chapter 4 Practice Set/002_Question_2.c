#include <stdio.h>

int main()
{
    // Question :-
    /*Write a program to print a multiplication
    table of 10 in reversed order.*/

    for (int process = 10; process >= 1; process--)
    {
        printf("%d x %d = %d\n", 10, process, 10*process);
    }
    return 0;
}