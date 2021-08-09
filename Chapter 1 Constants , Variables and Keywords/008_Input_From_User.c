#include <stdio.h>

int main()
{
    int R;

    printf("Enter a number :-\n");
    scanf("%d", &R); /* Here , 'scanf' is the library function an this
                     function helps us to receive input from user.*/
    printf("You entered the number as %d", R);
    return 0;
}