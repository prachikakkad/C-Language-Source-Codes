#include <stdio.h>

int main()
{
    // Question :-
    /* Write a C program to find out whether a student
    is pass of fail ; if it requires total 40% and at
    least 33% in each subject to pass. Assume 3 subjects
    and take marks as input from user.*/

    int maths, science, english, total = (maths + science + english) / 3;

    printf("Enter your Maths marks out of 100 :-\n");
    scanf("%d", &maths);
    printf("Enter your Science marks out of 100 :-\n");
    scanf("%d", &science);
    printf("Enter your English marks out of 100 :-\n");
    scanf("%d", &english);

    if (maths >= 33 && science >= 33 && english >= 33 && total >= 40)
    {
        printf("CONGRATULATIONS ! You are PASSED !");
    }
    else if (maths < 33 || science < 33 || english < 33 || total < 40)
    {
        printf("SORRY ! You are FAILED !");
    }
    else
    {
        printf("Enter VALID Marks !");
    }

    return 0;
}