#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to check whether the triangle 
    is possible or not with the help of sides. Take sides \
    as input from user.*/

    int side1, side2, side3;

    printf("Enter the first side of triangle :-\n");
    scanf("%d", &side1);
    printf("Enter the second side of triangle :-\n");
    scanf("%d", &side2);
    printf("Enter the third side of triangle :-\n");
    scanf("%d", &side3);

    if (side1 + side2 > side3 || side1 + side3 > side2 || side2 + side3 > side1)
    {
        printf("This triangle is possible.");
    }
    else
    {
        printf("This triangle is not possible.");
    }

    return 0;
}