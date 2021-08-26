#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to print first ‘n’
     natural numbers in reverse order.*/
    
    int input;

    printf("Enter the number of natural numbers you want to see in reverse order :-\n");
    scanf("%d" , &input);
    printf("\n");

    for (int process = 1; process < input; input--)
    {
        printf("%d\n" , input - 1);
    }
    
    return 0;
}