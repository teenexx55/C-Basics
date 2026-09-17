#include <stdio.h>

int main() {
    int reverse = 0, num, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
}