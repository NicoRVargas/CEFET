#include <stdio.h>

int MaiorDivisor(int n) {
    int largestPower = 1;

    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            int power = 1;
            while (n % i == 0) {
                n /= i;
                power *= i;
            }
            if (power > largestPower) {
                largestPower = power;
            }
        }
    }

    return largestPower;
}

int main() {
    int N;

    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    int largestDivisor = MaiorDivisor(N);
    printf("O maior divisor de %d que é uma potência de um número primo fatorado é: %d\n", N, largestDivisor);
    
    return 0;
}
