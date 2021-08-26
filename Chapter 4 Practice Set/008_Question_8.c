#include <stdio.h>

int main()
{
    // Question :-
    /* Write a program to calculate the square
     of a given number using for loop.*/

    int input , result;

    printf("Enter the number you want square of :-\n");
    scanf("%d" , &input);

    for (int process = 1; process <= input; process++)
    {
        result = process*input;
    }
    printf("The square of %d is %d" , input , result);
     
    return 0;
}