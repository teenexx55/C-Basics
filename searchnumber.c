#include <stdio.h>

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int target, found = 0;
    printf("Enter the number to search: ");
    scanf("%d", &target);

    for(int i = 0; i < 10; i++) {
        if(arr[i] == target) {
            printf("Found at index %d\n", i);
            found = 1;
        }
    }
    if(found) {
        printf("Number found in the array.\n");
    } else {
        printf("Number not found in the array.\n");
    }
    return 0;
}