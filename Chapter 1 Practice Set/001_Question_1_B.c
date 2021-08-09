#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to calculate area of a rectangle.
       A. Using Hard Coded Inputs
       B. Using Inputs given By user.*/

    int length, breadth;

    printf("Enter the length of rectangle :- \n");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle :- \n");
    scanf("%d", &breadth);
    printf("The area of rectangle with length = %d and breadth = %d is %d", length, breadth, length * breadth);
    return 0;
}