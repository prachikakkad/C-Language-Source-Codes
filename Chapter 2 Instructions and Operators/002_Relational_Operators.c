#include <stdio.h>

int main()
{
    int a = 12;
    int b = 6;
    int c = 6;
    int d = 0;

    printf("12 == 6 = %d\n", a == b); // (Is equal to)Returns 0 because it is false as 12 and 6 are unequal
    printf("6 == 6 = %d\n", b == c);  // (Is equal to)Returns 1 because it is true as 6 and 6 are equal
    printf("12 != 6 = %d\n", a != b); // (Is not equal to)Returns 1 because it is true as 12 and 6 are unequal
    printf("6 != 6 = %d\n", b != c);  //  (Is not equal to)Returns 0 because it is false as 6 and 6 are equal
    printf("12 > 6 = %d\n", a > b);   //  (Greater than)Returns 1 because it is true as 12 is greater than 6
    printf("6 > 6 = %d\n", b > c);    //   (Greater than)Returns 0 because it is false as 6 is equal to 6
    printf("12 < 6 = %d\n", a < b);   // (Less than)Returns 0 because it is false as 6 is not greater than 12
    printf("6 < 6 = %d\n", b < c);    // (Less than)Returns 0 because it is false as 6is equal to 6
    printf("12 >= 6 = %d\n", a >= b); // (Greater than or equal to) Returns 1 because it is true as 12 is greater than 6
    printf("6 >= 6 = %d\n", b >= c);  // (Greater than or equal to)Returns 1 because it is true as 6 is equal to 6
    printf("12 <= 6 = %d\n", a <= b); // (Less than or equal to)Returns 0 because it is false as 12 is greater than 6
    printf("6 <= 6 = %d\n", b <= c);  // (Less than or equal to)Returns 1 because it is true as 6 is equal to 6

    return 0;
}