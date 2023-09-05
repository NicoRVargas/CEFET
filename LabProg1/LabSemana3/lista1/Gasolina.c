#include <stdio.h>

int main() {
    
    int tempo, velocidade, distancia, litros;

    scanf("%d %d", &tempo, &velocidade);

    distancia = tempo * velocidade;

    litros = distancia/12;

    printf("Distância: %dKM\n Litros: %d\n", distancia, litros);

    return 0;
}