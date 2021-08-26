#include <stdio.h>

int main()
{
    int d = 6, i = 1;
    while (i < 10)
    {
        if (i != d)
        {
            continue;
        }
        else
        {
            printf("%d", i);
        }
    }

    return 0;
}