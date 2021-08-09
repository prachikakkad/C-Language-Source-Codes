#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to convert
     centigrade into Fahrenheit.*/

    float temperature;

    printf("Enter the temperature in Celsius :-\n");
    scanf("%f", &temperature);
    printf("The Fahrenheit temperature of %f celsius is %f", temperature, temperature * 1.8 + 32);
    return 0;
}