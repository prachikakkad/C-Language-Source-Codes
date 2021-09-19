#include<stdio.h>

int main()
{
    // Question :-
    /* Write a program to print the address of a variable.
    Use this address to get the value of this variable.*/
    int i = 6;
    int *j = &i;
    printf("Address of i is %u\n", &i);
    printf("Value of i is %d\n" ,*j);
    
    return 0;   
}