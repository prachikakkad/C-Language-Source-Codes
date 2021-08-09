#include <stdio.h>

int main()
{
    // Question :-
    // Write a program to add 2 numbers.

    int one, two;

    printf("Enter first number :-\n");
    scanf("%d", &one);
    printf("Enter second number :-\n");
    scanf("%d", &two);
    printf("The sum of %d and %d is %d", one, two, one + two);
    return 0;
}