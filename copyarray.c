#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int b[5];

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}