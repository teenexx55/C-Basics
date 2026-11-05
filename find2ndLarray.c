#include <stdio.h>
#include <limits.h>

int main() {
    printf("Enter the size of the array: ");
    int size;
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        printf("No second largest\n");
    else
        printf("Second largest = %d\n", second);
    return 0;
}