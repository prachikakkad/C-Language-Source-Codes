#include <stdio.h>

int main()
{
    int a = 12;
    int b = 6;
    int c = 6;
    int d = 0;
    int e = 2;
    int f = 3;

    printf("12 & 6 = %d\n", a & b);  //(&)Returns 4 because it is true as both operands are non - zero and int takes 4 bits in my architecture
    printf("12 & 0 = %d\n", a & d);  //(&)Returns 0 because it is false as only one operand 1 is non - zero
    printf("0 & 0 = %d\n", d & d);   //(&)Returns 0 because it is false as both operands are zero
    printf("12 ! 0 = %d\n", !d);     //(!)Returns 1 because it is true as one operand is non - zero
    printf("0 ! 0 = %d\n", !d);      //(!)Returns 0 because it is false as both operands are zero
    printf("12 ! 6 = %d\n", !a);     //(!)Returns 0 because it is false as both operands are non - zero
    printf("2 ^ 3 = %d\n", e ^ f);   //(^)Returns 1 because it is true as both operands are non - zero {Binary language rules is the major reason why it returned 1}
    printf("2 ^ 0 = %d\n", e ^ d);   //(^)Returns 2 because it is true as one operand is non - zero {Binary language rules is the major reason why it returned 2}
    printf("0 ^ 0 = %d\n", d ^ d); //(^)Returns 0 because it is false as both operands are zero {Binary language rules is the major reason why it returned 1}

    return 0;
}