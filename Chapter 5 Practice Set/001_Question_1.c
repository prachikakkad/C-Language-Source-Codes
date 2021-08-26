#include <stdio.h>
float average(float a, float b, float c);
int main()
{
    float a, b, c, d;
    d = average(a, b, c);
    printf("Enter first number:-\n");
    scanf("%f", &a);
    printf("Enter second number :-\n");
    scanf("%f", &b);
    printf("Enter third number :-\n");
    scanf("%f", &c);
    printf("The average is %f", average(a, b, c));
    return 0;
}
float average(float a, float b, float c)
{
    float d;
    d = (a + b + c) / 3;
    return d;
}