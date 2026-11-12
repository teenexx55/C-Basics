#include <stdio.h>

void sumOfArray(int arr[], int size, int *sum)
{
    *sum = 0; 
    for (int i = 0; i < size; i++)
    {
        *sum += arr[i]; 
    }
}

int main() {
    int arr[4] = {10, 20, 30, 50};
    int n = 4;

    int total;
    sumOfArray(arr, n, &total);
    printf("Sum of array elements: %d\n", total);
    return 0;
}