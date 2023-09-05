#include <stdio.h>

int main() {
    
    double numeroAtual, antecessor, soma, numeroInicial;

    scanf("%lf", &numeroAtual);

    soma = 0.0;

    numeroInicial = numeroAtual;

    for (int i = 1; i <= numeroInicial-1; i++) {
        antecessor = numeroAtual - 1;
        soma += (numeroAtual * antecessor) / i;
        numeroAtual = antecessor;
    }

    printf("%.2lf\n", soma);

    return 0;
}