#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)      
        {
            printf("  ");
        }

        for (int j = n; j >= n - i + 1; j--) 
        {
            printf("%d ", j);
        }

        for (int j = n - i + 2; j <= n; j++)  
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}