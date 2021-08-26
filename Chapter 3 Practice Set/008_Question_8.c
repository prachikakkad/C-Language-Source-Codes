#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to check whether the two
     integers entered by user are equal or not. */

    int num1, num2;

    printf("Enter first number :-\n");
    scanf("%d", &num1);
    printf("Enter second number :-\n");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("Both the numbers are equal.");
    }
    else 
    {
        printf("Both the numbers are not equal.");
    }

    return 0;
}