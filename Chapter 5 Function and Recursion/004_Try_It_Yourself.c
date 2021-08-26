#include <stdio.h>
#include <math.h>

int main()
{
    // Question :-
    /* Use the library functions to calculate the area 
    of a square with side a.*/

    float a;
    printf("Enter the side of square :-\n");
    scanf("%f", &a);
    printf("The area of square is :- %f", pow(a, 2));

    return 0;
}