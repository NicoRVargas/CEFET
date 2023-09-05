#include <stdio.h>

int main() {

    int total, limite;

    scanf("%d", &limite);

    total = 0;

    for(int i = 1; i < limite; i+=2) {
        total += i;
    }

    printf("%d\n", total);

    return 0;
}