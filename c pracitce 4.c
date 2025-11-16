#include <stdio.h>
#include <math.h>

float square(float num) {
    return num * num;
}

float reciprocal(float num) {
    return 1 / num;
}

int main() {
    float number;

    printf("Enter any number: ");
    scanf("%f", &number);

    if (number == 0) {
        printf("Reciprocal of 0 is undefined.\n");
    } else {
        printf("Square of %.2f is: %.2f\n", number, square(number));
        printf("Reciprocal of %.2f is: %.4f\n", number, reciprocal(number));
    }

    return 0;
}