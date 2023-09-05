#include <stdio.h>

int main() {

    int initialHour, initialMinute, finalHour, finalMinute;

    int calculationGeneral, calculationHour, calculationMinute;

    scanf("%d %d %d %d", &initialHour, &initialMinute, &finalHour, &finalMinute);

    if (initialHour >= finalHour && initialMinute >= finalMinute) {
        finalHour += 24;
    }

    calculationGeneral = (finalHour*60 - initialHour*60) + (finalMinute - initialMinute);
    calculationHour = (calculationGeneral / 60);
    calculationMinute = (calculationGeneral % 60);

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", calculationHour, calculationMinute);

    return 0;
}