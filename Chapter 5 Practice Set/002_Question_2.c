#include <stdio.h>

float converter(float temperature);

int main()
{
    // Question :-
    /* Write a C program to using functions to convert 
    Celsius to Fahrenheit.*/

    float temperature;
    
    printf("Enter a temperature in Celsius :-\n");
    scanf("%f" , &temperature);

    float converter(float temperature);

    printf("The Coversion of %f celsius to Fahrenheit is %f" , temperature , converter(temperature));

    return 0;
}
float converter(float temperature) 
{
    float Fahrenheit;
    Fahrenheit = temperature * 9/5 + 32;

    return Fahrenheit;
}