#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to calculate income tax by taking income as input
       as per slabs mentioned below :-
       Below 2.5 lakh → No tax
       2.5 lakh to 5 lakh → 5%
       5 lakhs to 10 lakhs → 20%
       Above 10 lakhs → 50%  */

    int income;

    printf("Enter your yearly income :-\n");
    scanf("%d", &income);

    if (income < 250000)
    {
        printf("No tax !");
    }
    else if (income >= 250000 && income <= 500000)
    {
        printf("Tax to be paid is :- %d", (income - 250000) / 20);
    }
    else if (income > 500000 && income <= 1000000)
    {
        printf("Tax to be paid is :- %d", (income - 250000) / 5);
    }
    else if (income > 1000000)
    {
        printf("Tax to be paid is :- %d", (income - 250000) / 2);
    }

    return 0;
}