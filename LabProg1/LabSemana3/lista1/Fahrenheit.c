#include <stdio.h>

int main() {
    
    int grausCelsius, grausFahrenheit;

    scanf("%d", &grausCelsius);

    grausFahrenheit = (9 * grausCelsius + 160)/5;

    printf("%d\n", grausFahrenheit);

    return 0;
}