#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to print first ānā natural
    numbers using do while loop. Take ānā as input
    from the user.*/

    int input, process = 0;

    printf("Enter the number of natural numbers you want to see :-\n");
    scanf("%d", &input);
    printf("\n");

    do
    {
        printf("%d\n", process + 1);
        process++;
    } while (process < input);

    return 0;
}