#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to calculate perimeter of a square.
       A. Using hard coded inputs.
       B. Using inputs given by user.*/

    int side;

    printf("Enter the length if side of square :-\n");
    scanf("%d" , &side);  
    printf("The Perimeter of square with side %d is %d" , side , side*4);
    return 0;
}