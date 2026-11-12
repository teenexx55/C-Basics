#include <stdio.h>

void reverse(int arr[], int start, int end)
{
    if (start >= end)      // base case: nothing left to swap
    {
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverse(arr, start + 1, end - 1);   // recursive call on the middle part
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;

    reverse(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
} 