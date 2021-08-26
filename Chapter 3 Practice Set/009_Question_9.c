#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to determine whether a character 
    entered by user is lowercase or not.*/
    /*According to ASCII Table , lowercase case value
    starts from 97 and ends at 122*/

    char input;

    printf("Enter a character :-\n");
    scanf("%c", &input);

    if (input <= 122 && input >= 97)
    {
        printf("This is lowercase.");
    }
    else
    {
        printf("This is not lowercase.");
    }
    
    
    return 0;
}