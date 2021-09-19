#include <stdio.h>

int main()
{
    int Prachi = 6;
    int *Pointer = &Prachi;

    printf("Value of Prachi is %d\n", Prachi);
    printf("Value of Prachi is %d\n", *Pointer);
    printf("Address of Prachi is %u\n", &Prachi);
    printf("Address of Prachi is %u\n", Pointer);
    printf("Address of Pointer is %u\n", &Pointer);
    printf("Address of Prachi is %d\n", *(&Pointer));

    return 0;
}