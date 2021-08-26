#include <stdio.h>

int main()
{
    // Question :-
    /* Repeat 8 using while loop.*/

    int input, process = 1, result;

    printf("Enter the number you want square of :-\n");
    scanf("%d", &input);

    while (process <= input)
    {
        result = process * input;
        process++;
    }

    printf("The square of %d is %d", input, result);

    return 0;
}