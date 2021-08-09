#include <stdio.h>

int main()
{
    int marks;

    printf("Enter your marks :-\n");
    scanf("%d" , &marks);

    if (marks >= 50)
    {
        printf("Good but try to improve more !");
    }
    else
    {
        printf("Needs Improvement !");
    }
        
    return 0;
}