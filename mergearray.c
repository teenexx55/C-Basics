#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int arr3[10];

    for(int i = 0; i < 5; i++) {
        arr3[i] = arr[i];
    }
    for(int i = 0; i < 5; i++) {
        arr3[i + 5] = arr2[i];
    }
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr3[i]);
    }
    //printf("\n");
    return 0; 
}