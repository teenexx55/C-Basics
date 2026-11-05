#include <stdio.h>

double averageOfThreeNumbers(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

int main() {
    double num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    double avg = averageOfThreeNumbers(num1, num2, num3);
    printf("Average of %.2lf, %.2lf and %.2lf is: %.2lf\n", num1, num2, num3, avg);

    return 0;
}