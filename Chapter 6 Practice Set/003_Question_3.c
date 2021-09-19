#include <stdio.h>

int multiple(int a, int *b);

int main()
{
    // Question :-
    /* Write a program to change the value of a variable to ten
    times its current value. Write a function and pass the value 
    by reference.*/
    int a = 6;
    int *b = &a;
    int multiple(int a, int *b);
    printf("The ten times of a is %d\n", *b * 10);
    return 0;
}
int multiple(int a, int *b) {}