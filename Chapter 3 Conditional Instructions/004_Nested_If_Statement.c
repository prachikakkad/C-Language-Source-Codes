#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age :-\n");
    scanf("%d", &age);

    if (age > 0)
    {
        if (age < 50)
        {
            printf("You are still young !");
        }
        else
        {
            printf("You are an old person !");
        }
    }
    
    return 0;
}