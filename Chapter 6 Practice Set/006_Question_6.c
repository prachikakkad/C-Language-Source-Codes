#include <stdio.h>

int multiple(int a);

int main()
{
    // Question :-
    /* Try problem 3 using call by value and verify that it doesn’t
    change the value of the said variable.*/
    int a = 6;
    int multiple(int a);
    printf("The ten times of a is %d\n", a * 10);
    return 0;
}
int multiple(int a) {}