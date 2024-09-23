#include <stdio.h>

float celsius_a_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float grados_celsius, grados_fahrenheit;

    printf("Introduce la temperatura en grados Celsius: ");
    scanf("%f", &grados_celsius);

    grados_fahrenheit = celsius_a_fahrenheit(grados_celsius);

    printf("%.2f°C es igual a %.2f°F\n", grados_celsius, grados_fahrenheit);

    return 0;
}
