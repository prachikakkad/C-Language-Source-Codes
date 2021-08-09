#include <stdio.h>

int main()
{
    // Question :-
    // Write a program to check whether a number is divisible by 97 or not.

    int num;

    printf("If the divisibility test is 0 then the number is divisible by 97 otherwise not !\n");
    printf("Enter a number :- \n");
    scanf("%d" , &num);
    printf("The divisibility test result is %d" , num%97);
    return 0;
}