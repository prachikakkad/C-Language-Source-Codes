#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    int a = 23 , b = 6;
    printf("Value of a and b before swap is %d and %d\n" , a , b);
    swap(&a , &b);
    printf("Value of a and b after swap is %d and %d\n" , a , b);
    return 0;
}
void swap(int *x, int *y)
{
    int template;
    template = *x;
    *x = *y;
    *y = template;
}