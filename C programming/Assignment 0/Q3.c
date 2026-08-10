#include <stdio.h>

int main() {
    float celsius = 23;
    float fahrenheit;

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);

    return 0;
}