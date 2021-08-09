#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to calculate Simple Interest for a set 
    of values representing Principal , Number of Years and Rate
    of Interest.*/

    int Principal , Years , Rate_Of_Interest;
    printf("Enter the Pricipal Amount :-\n");
    scanf("%d" , &Principal);
    printf("Enter the Number of Years :-\n");
    scanf("%d" , &Years);
    printf("Enter the Rate of Interest per year :-\n");
    scanf("%d" , &Rate_Of_Interest);
    printf("The Interest Amount of Rs %d for %d years at the rate of %d%% per year is Rs %d" , Principal , Years , Rate_Of_Interest ,Principal*1+Rate_Of_Interest*Years);
    return 0;
}