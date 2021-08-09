#include <stdio.h>

int main()
{
    // Question :-
    /*Write a C program to find grade of a student based on marks given below:-
    90 to 100 --> A
    80 to 89 --> B
    70 to 79 --> C
    60 to 69 --> D
    50 to 59 --> E
    Less than 50 --> Fail*/

    int marks;

    printf("Enter your marks out of 100 :-\n");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Your grade is A !");
    }
    else if (marks >= 80 && marks <= 89)
    {
        printf("Your grade is B !");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("Your grade is C !");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("Your grade is D !");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("Your grade is E !");
    }
    else if (marks < 50)
    {
        printf("SORRY ! You are FAILED !");
    }
    else
    {
        printf("Please Enter VALID marks !");
    }

    return 0;
}