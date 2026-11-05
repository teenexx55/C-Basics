#include <stdio.h>

double frac(double num) {
    return num - (int)num;
}

int main() {
    double num;
    printf("Enter a decimal number: ");
    scanf("%lf", &num);
    double result = frac(num);
    printf("Fractional part of %.2lf is %.2lf\n", num, result);
    return 0;
}