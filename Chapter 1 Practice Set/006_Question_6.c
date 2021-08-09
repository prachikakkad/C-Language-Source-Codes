#include <stdio.h>

int main()
{
    // Question :-
    /*Write a C program to calculate square of any number 
    entered by the user.*/

    int number;

    printf("Enter a number :-\n");
    scanf("%d" , &number);
    printf("The square of %d is %d" , number , number*number);
    return 0;
}