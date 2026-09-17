#include <stdio.h>

 int main() {
    int n, i, sum = 0;
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            sum += i;
        }
    }
    printf("Sum of all even numbers from 1 to 100 is: %d\n", sum);
    return 0;
 }