#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age :-\n");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("Your age is greater than 18.");
    }

    return 0;
}