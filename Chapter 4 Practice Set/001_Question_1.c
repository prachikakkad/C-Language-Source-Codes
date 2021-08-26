#include <stdio.h>

int main()
{
    // Question :-
    /* Write a program to print the multiplication 
    table of a given number n.*/

    int input;

    printf("Enter the number you want the multiplication table of :-\n");
    scanf("%d", &input);
    printf("\n");

    for (int process = 1; process <= 10; process++)
    {
        printf("%d x %d = %d\n" , input , process , input*process);
    }
    
    return 0;
}