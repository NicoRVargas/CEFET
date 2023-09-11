#include <stdio.h>

int ehPalindromo(int numero) {
    int original = numero;
    int reverso = 0;

    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    return original == reverso;
}

int main() {
    for (int i = 0; i <= 10000; i++) {
        if (ehPalindromo(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
