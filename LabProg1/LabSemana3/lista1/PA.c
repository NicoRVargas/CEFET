#include <stdio.h>

int main() {

    int numero, primeiroTermo, razao, posicao;

    scanf("%d %d %d", &primeiroTermo, &razao, &posicao);

    numero = primeiroTermo + (posicao - 1) * razao;
    
    printf("%d\n", numero);

    return 0;
}