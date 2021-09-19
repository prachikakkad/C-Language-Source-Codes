#include<stdio.h>

int main()
{
    // Question :-
    /* Write a program to print the value of a variable i by using 
    the "pointer to pointer" type of variable.*/
    
    int d = 6;
    int *ptr;
    int **ptr_ptr;

    ptr = &d;
    ptr_ptr= &ptr;

    printf("The value of d is %d", **ptr_ptr);
    return 0;
}