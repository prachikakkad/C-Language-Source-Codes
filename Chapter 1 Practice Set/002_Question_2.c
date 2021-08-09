#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to calculate the area of a circle 
    and modify the same program to calculate the volume of
    a cylinder given its radius and height.*/

    float radius_of_circle, height, radius_of_cylinder;

    printf("Enter the radius of circle :-\n");
    scanf("%f", &radius_of_circle);
    printf("The area of circle with radius = %f is %f\n", radius_of_circle, 3.14 * radius_of_circle * radius_of_circle);

    printf("Enter the radius of cylinder :-\n");
    scanf("%f", &radius_of_cylinder);
    printf("Enter the height of cylinder :-\n");
    scanf("%f", &height);
    printf("The area of cylinder with radius = %f and height = %f is %f", radius_of_cylinder, height, 3.14 * radius_of_cylinder * radius_of_cylinder * height);
    return 0;
}