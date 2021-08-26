#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result = 0.0f;

    printf("Enter first number :-\n");
    printf("Enter the operation you want to do that is + , - , * , / :-\n");
    printf("Enter second number :-\n");
    scanf("%f %c %f", &num1, &op, &num2);

    /* Switch the value and perform action based on operator*/
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':
        result = num1 / num2;
        break;

    default:
        printf("Invalid operator");
    }

    /* Prints the result */
    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return 0;
}