#include <stdio.h>

int main()
{
    int Prachi = 6;
    int *Pointer = &Prachi;
    int **pointer = &Pointer;

    printf("%u\n", Pointer);
    printf("%u\n", pointer);
    
    return 0;
}