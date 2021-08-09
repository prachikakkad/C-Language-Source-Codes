#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age :-\n");
    scanf("%d", &age);

    if (age <= 12)
    {
        printf("You are a child !");
    }
    else if (age >= 13 && age <= 18)
    {
        printf("You are a teen-ager !");
    }
    else
    {
        printf("You are an adult !");
    }

    return 0;
}