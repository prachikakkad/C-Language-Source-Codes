#include <stdio.h>

int main()
{
    int a = 12;
    int b = 6;
    int c = 6;
    int d = 0;

    printf("12 && 6 = %d\n", a && b); //(&&) Returns 1 because it is true as both operands are non - zero
    printf("0 && 0 = %d\n", d && d);  //(&&) Returns 0 because it is false as both operands are zero
    printf("12 && 0 = %d\n", a && d); //(&&) Returns 0 because it isfalse as one operand is non - zero
    printf("12 || 6 = %d\n", a || b); //(||)Returns 1 because it is true as both operands are non - zero
    printf("12 || 0 = %d\n", a || d); //(||)Returns 1 because it is true as one operand is non - zero
    printf("0 || 0 = %d\n", d || d);  //(||)Returns 0 because it is false as both operands are zero
    printf("12 ! 6 = %d\n", !b);     //(!)Returns 0 as it reverses the correct state
    printf("12 ! 0 = %d\n", !d);     //(!)Returns 1 as it reverses the correct state
    printf("0 ! 0 = %d\n", !d);    //(!)Returns 1 as it reverses the correct state
    return 0;
}