#include <stdio.h>

int main() {
    float cielsus = 22.7;
    float fahrenheit;
    fahrenheit = cielsus * 9.0/5.0 + 32;
    printf("Cielsus: %.1f °C; Fahrenheit: %.2f °F", cielsus, fahrenheit);
    return 0;
}
