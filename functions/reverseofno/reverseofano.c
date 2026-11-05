#include <stdio.h>

// int main() {
//     int reverse = 0, num, remainder;
//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     while (num != 0) {
//         remainder = num % 10;
//         reverse = reverse * 10 + remainder;
//         num /= 10;
//     }
// }
int rev(int num) {
    int reverse = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    return reverse;
}
 
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int reversedNumber = rev(num);
    printf("Reversed number: %d\n", reversedNumber);
    return 0;
}