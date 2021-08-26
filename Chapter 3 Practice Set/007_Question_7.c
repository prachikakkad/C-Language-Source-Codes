#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to check whether a triangle is
     Equilateral , Isosceles or Scalene.*/

    int side_1, side_2, side_3;

    printf("Enter the length of first side :-\n");
    scanf("%d", &side_1);
    printf("Enter the length of second side :-\n");
    scanf("%d", &side_2);
    printf("Enter the length of third side :-\n");
    scanf("%d", &side_3);

    if (side_1 == side_2 && side_2 == side_3 && side_1 == side_3)
    {
        printf("The triangle with side %d , %d and %d is equilateral triangle.", side_1, side_2, side_3);
    }
    else if (side_1 != side_2 && side_2 != side_3 && side_1 != side_3)
    {
        printf("The triangle with side %d , %d and %d is Scalene triangle.", side_1, side_2, side_3);
    }
    else if (side_1 == side_2 || side_1 == side_3 || side_3 == side_2)
    {
        printf("The triangle with side %d , %d and %d is Isoceles triangle.", side_1, side_2, side_3);
    }

    return 0;
}