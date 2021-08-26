#include <stdio.h>

int factorial(int x);

int main()
{
    int x;

    printf("Enter a number :-\n");
    scanf("%d" , &x);

    factorial(x);

    printf("Factorial of %d is %d" , x , factorial(x));
    return 0;
}
int factorial(int x) 
{
    if (x == 1 || x == 0)           
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
    
}