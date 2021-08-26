#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to find greatest of 
    four numbers entered by user.*/

    int number_1, number_2, number_3, number_4;

    printf("Enter first number :-\n");
    scanf("%d", &number_1);
    printf("Enter second number :-\n");
    scanf("%d", &number_2);
    printf("Enter third number :-\n");
    scanf("%d", &number_3);
    printf("Enter forth number :-\n");
    scanf("%d", &number_4);

    if (number_1 > number_2 && number_1 > number_3 && number_1 > number_4)
    {
        printf("%d is greatest among all !", number_1);
    }
    else if (number_2 > number_1 && number_2 > number_3 && number_2 > number_4)
    {
        printf("%d is greatest among all !", number_2);
    }
    else if (number_3 > number_1 && number_3 > number_2 && number_3 > number_4)
    {
        printf("%d is greatest among all !", number_3);
    }
    else if (number_4 > number_1 && number_4 > number_2 && number_4 > number_3)
    {
        printf("%d is greatest among all !", number_4);
    }
    else
    {
        printf("Enter VALID numbers ! Make sure all the numbers must be different !");
    }

    return 0;
}