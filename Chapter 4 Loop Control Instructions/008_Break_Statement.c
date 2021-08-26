#include <stdio.h>

int main()
{
    for (int d = 1; d < 1000; d++)
    {
        printf("%d\n", d);
        if (d == 23)
        {
            break;
        }
    }

    return 0;
}